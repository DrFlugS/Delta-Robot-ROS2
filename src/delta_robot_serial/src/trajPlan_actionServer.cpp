#include <functional>
#include <memory>
#include <thread>
#include <cstdlib>
#include <chrono>
#include <cmath>
#include <vector>
#include <array>
#include <cstdint>
#include <future>
#include <spline_trajectory.h>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp/callback_group.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <delta_robot_serial/action/pos_traj.hpp>
#include <delta_robot_serial/srv/ikin.hpp>
#include <rclcpp_components/register_node_macro.hpp>
// Import the communication message headers and enable DLL nodes
// Add your code here

using namespace std::placeholders;
class TrajectoryPlanServer : public rclcpp::Node {
    public:
        using PosTraj = delta_robot_serial::action::PosTraj;
        using GoalHandlePosTraj = rclcpp_action::ServerGoalHandle<PosTraj>;
        explicit TrajectoryPlanServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()):Node("trajectory_plan_server",options) {
            //initialize action server
            this->action_server_ = rclcpp_action::create_server<PosTraj>(
                this,
                "trajectory_plan",
                std::bind(&TrajectoryPlanServer::handle_goal, this, _1, _2),
                std::bind(&TrajectoryPlanServer::handle_cancel, this, _1),
                std::bind(&TrajectoryPlanServer::handle_accepted, this, _1));

            action_feedback_ = std::make_shared<PosTraj::Feedback>();
            action_result_ = std::make_shared<PosTraj::Result>();

            RCLCPP_INFO(this->get_logger(),"trajectory plan server started!");

            // initialize ikin client
            ikin_client_ = this->create_client<delta_robot_serial::srv::Ikin>("ikin_server");
            ikin_request=std::make_shared<delta_robot_serial::srv::Ikin::Request>();

            // initialize joint_state's subscriber
            // NOTE: pass automatically_add_to_executor_with_node = false so this
            // group is serviced ONLY by the internal `executor` we spin manually
            // in executeCB/generate_trajectory. Otherwise the component container's
            // executor also consumes jointCB and our manual spin_once() may never
            // observe state_received_ flip, causing spurious "waiting for position"
            // timeouts.
            cbgroup_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive, false);
            so.callback_group=cbgroup_;
            joint_sub_ = this->create_subscription<sensor_msgs::msg::JointState>("joint_states", 1,
                                          std::bind(&TrajectoryPlanServer::jointCB,this,_1), so);
            executor.add_callback_group(cbgroup_,this->get_node_base_interface());

            // Default state, in case no joint_states message has arrived yet
            state_x = 0.0;
            state_y = 0.0;
            state_z = -110.0;
        }
    private:
        // A single sampled setpoint plus the supplied via point it heads toward.
        struct Waypoint { double x, y, z; uint32_t via_index; };

        // action server
        rclcpp_action::Server<PosTraj>::SharedPtr action_server_;
        PosTraj::Feedback::SharedPtr action_feedback_;
        PosTraj::Result::SharedPtr action_result_;

        // Ikin service client
        rclcpp::Client<delta_robot_serial::srv::Ikin>::SharedPtr ikin_client_;
        delta_robot_serial::srv::Ikin::Request::SharedPtr ikin_request;

        // joint_state's subscriber
        rclcpp::CallbackGroup::SharedPtr cbgroup_;
        rclcpp::SubscriptionOptions so;
        rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_sub_;
        rclcpp::executors::SingleThreadedExecutor executor;
        double state_x;
        double state_y;
        double state_z;

        // Class members
        double T_ = 3.0;
        double f_ = 30.0;  // Hz — waypoint send rate; kept low so the pseudo-arduino (1°/cycle) can track

        // Add a flag to the class
        bool state_received_ = false;

        rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,
                                                std::shared_ptr<const PosTraj::Goal> goal) {
            (void)uuid;
            // The Goal now carries n via points as parallel x/y/z arrays. Reject
            // empty or mismatched-length goals up front.
            if (goal->x.empty() ||
                goal->x.size() != goal->y.size() ||
                goal->x.size() != goal->z.size()) {
                RCLCPP_ERROR(this->get_logger(),
                    "Rejecting goal: x/y/z must be non-empty and equal length (got %zu/%zu/%zu)",
                    goal->x.size(), goal->y.size(), goal->z.size());
                return rclcpp_action::GoalResponse::REJECT;
            }
            RCLCPP_INFO(this->get_logger(),
                "Received goal request with %zu via point(s), ending at (%.1f, %.1f, %.1f)",
                goal->x.size(), goal->x.back(), goal->y.back(), goal->z.back());
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }

        rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandlePosTraj> goal_handle) {
            RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
            (void)goal_handle;
            return rclcpp_action::CancelResponse::ACCEPT;
        }

        void handle_accepted(const std::shared_ptr<GoalHandlePosTraj> goal_handle) {
            using namespace std::placeholders;
            // this needs to return quickly to avoid blocking the executor, so spin up a new thread
            std::thread{std::bind(&TrajectoryPlanServer::executeCB, this, _1), goal_handle}.detach();
        }

        void executeCB(const std::shared_ptr<GoalHandlePosTraj> goal_handle) {
            // Add your code here
            const auto goal = goal_handle->get_goal();
            rclcpp::Rate rate(f_);

            auto trajectory = generate_trajectory(goal->x, goal->y, goal->z);

            if (trajectory.empty()) {
                goal_handle->abort(action_result_);
                return;
            }

            for (auto &waypoint : trajectory) {
                if (goal_handle->is_canceling()) {
                    goal_handle->canceled(action_result_);
                    return;
                }

                ikin_request->x = waypoint.x;
                ikin_request->y = waypoint.y;
                ikin_request->z = waypoint.z;

                auto future = ikin_client_->async_send_request(ikin_request);

                if (future.wait_for(std::chrono::seconds(5)) != std::future_status::ready) {
                    RCLCPP_ERROR(this->get_logger(), "IK request timed out");
                    goal_handle->abort(action_result_);
                    return;
                }

                auto result = future.get();

                if (result &&
                    !std::isnan(result->phi_11) &&
                    !std::isnan(result->phi_21) &&
                    !std::isnan(result->phi_31)) {
                    // Report progress as the commanded Cartesian setpoint (mm),
                    // matching the x,y,z semantics of Goal/Result. via_index is
                    // the supplied via point we are currently heading toward.
                    // The IK result above is still checked purely to detect an
                    // invalid pose.
                    action_feedback_->x = waypoint.x;
                    action_feedback_->y = waypoint.y;
                    action_feedback_->z = waypoint.z;
                    action_feedback_->via_index = waypoint.via_index;
                    goal_handle->publish_feedback(action_feedback_);
                    rate.sleep();
                } else {
                    RCLCPP_ERROR(this->get_logger(), "Invalid IK response");
                    goal_handle->abort(action_result_);
                    return;
                }
            }

            // After the trajectory loop ends, wait for convergence on the LAST
            // supplied via point (the end of the tracked trajectory).
            const double goal_x = goal->x.back();
            const double goal_y = goal->y.back();
            const double goal_z = goal->z.back();
            double tolerance = 5.0;   // mm — loosened to match the pseudo's 1° slew granularity
            int max_attempts = 30;   // give the pseudo several seconds to finish slewing
            int attempts = 0;

            while (attempts < max_attempts) {
                state_received_ = false;
                auto timeout = std::chrono::steady_clock::now() + std::chrono::seconds(3);
                while (!state_received_) {
                    executor.spin_once(std::chrono::milliseconds(10));
                    if (std::chrono::steady_clock::now() > timeout) {
                        RCLCPP_ERROR(this->get_logger(), "Timeout waiting for position");
                        goal_handle->abort(action_result_);
                        return;
                    }
                }

                double err_x = goal_x - state_x;
                double err_y = goal_y - state_y;
                double err_z = goal_z - state_z;
                double error = sqrt(err_x*err_x + err_y*err_y + err_z*err_z);

                RCLCPP_INFO(this->get_logger(), "Convergence error: %.2f mm", error);

                if (error <= tolerance) {
                    action_result_->x = state_x;
                    action_result_->y = state_y;
                    action_result_->z = state_z;
                    goal_handle->succeed(action_result_);
                    RCLCPP_INFO(this->get_logger(), "Goal reached within tolerance");
                    return;
                }

                attempts++;
                rate.sleep();
            }

            // If we get here, we never converged
            RCLCPP_WARN(this->get_logger(),
                "Failed to converge. Final error: %.2f mm. Position: (%.1f, %.1f, %.1f)",
                sqrt(pow(goal_x - state_x, 2) + pow(goal_y - state_y, 2) + pow(goal_z - state_z, 2)),
                state_x, state_y, state_z);
            action_result_->x = state_x;
            action_result_->y = state_y;
            action_result_->z = state_z;
            goal_handle->abort(action_result_);

        }
        // Build a dense, smooth trajectory that passes through the supplied via
        // points (xs/ys/zs, length n) in order. The robot's current position is
        // prepended as knot 0 so the arm blends in from wherever it is; a natural
        // cubic spline is fitted through all knots and sampled with a single
        // quintic time-scaling (zero velocity at the very start and end).
        std::vector<Waypoint> generate_trajectory(const std::vector<double>& xs,
                                                   const std::vector<double>& ys,
                                                   const std::vector<double>& zs) {
            state_received_ = false;

            auto timeout = std::chrono::steady_clock::now() + std::chrono::seconds(3);
            while (!state_received_) {
                executor.spin_once(std::chrono::milliseconds(10));
                if (std::chrono::steady_clock::now() > timeout) {
                    RCLCPP_WARN(this->get_logger(),
                        "No joint state yet; planning from last known state (%.1f, %.1f, %.1f)",
                        state_x, state_y, state_z);
                    break;
                }
            }

            const size_t n = xs.size();  // number of supplied via points

            // Knots: current position (index 0) followed by the n via points.
            std::vector<double> kx, ky, kz;
            kx.reserve(n + 1); ky.reserve(n + 1); kz.reserve(n + 1);
            kx.push_back(state_x); ky.push_back(state_y); kz.push_back(state_z);
            for (size_t i = 0; i < n; ++i) {
                kx.push_back(xs[i]); ky.push_back(ys[i]); kz.push_back(zs[i]);
            }
            const size_t P = kx.size();  // total knots = n + 1

            // Parameterise by cumulative chord length; t.back() == total length L.
            std::vector<double> t(P, 0.0);
            for (size_t k = 1; k < P; ++k) {
                double dx = kx[k] - kx[k - 1];
                double dy = ky[k] - ky[k - 1];
                double dz = kz[k] - kz[k - 1];
                t[k] = t[k - 1] + sqrt(dx * dx + dy * dy + dz * dz);
            }
            const double L = t.back();

            std::vector<Waypoint> trajectory;

            if (L < 1e-6) {
                // Already at the (single) target, or all via points coincide with
                // the current position: emit one point to avoid 0/0 sampling.
                trajectory.push_back({kx.back(), ky.back(), kz.back(),
                                      (uint32_t)(n - 1)});
                RCLCPP_INFO(this->get_logger(), "Zero-length trajectory; single point");
                return trajectory;
            }

            CubicSpline spline(t, kx, ky, kz);

            double peak_vel = (15.0 / 8.0) * L / T_;
            double max_step = peak_vel / f_;
            int N = std::max((int)ceil(L / max_step), 2);

            RCLCPP_INFO(this->get_logger(),
                "Trajectory: %zu via point(s), length %.1f mm, N: %d samples",
                n, L, N);

            for (int i = 1; i <= N; i++) {
                double tau = (double)i / N;
                double tau3 = tau * tau * tau;
                double tau4 = tau3 * tau;
                double tau5 = tau4 * tau;
                double s = 10.0 * tau3 - 15.0 * tau4 + 6.0 * tau5;
                double u = s * L;

                auto p = spline.evaluate(u);

                // Which supplied via point are we heading toward? Find segment k
                // with t[k] <= u <= t[k+1]; knot k+1 is supplied via point k.
                size_t seg = 0;
                while (seg + 1 < P - 1 && u > t[seg + 1]) ++seg;
                uint32_t via_index = (uint32_t)std::min(seg, n - 1);

                trajectory.push_back({p[0], p[1], p[2], via_index});
            }
            return trajectory;
        }

        // Update jointCB to set it
        void jointCB(const sensor_msgs::msg::JointState &msg) {
            // Guard against a message with fewer than 3 positions; .at() would
            // otherwise throw and take the node down.
            if (msg.position.size() < 3) {
                RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 1000,
                    "Ignoring joint_states with %zu positions (need >= 3)",
                    msg.position.size());
                return;
            }
            state_x = 1000 * msg.position[0];
            state_y = 1000 * msg.position[1];
            state_z = 1000 * msg.position[2];
            state_received_ = true;
        }
};

// Add your code here
RCLCPP_COMPONENTS_REGISTER_NODE(TrajectoryPlanServer)
