#include <serial/serial.h>
#include <string>
#include <regex>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <rclcpp/rclcpp.hpp>
#include <inverse_kinematics.h>
#include <delta_robot_serial/srv/ikin.hpp>

using namespace std;
static serial::Serial sp;
void setSerialPort(string serial_port, int baudrate) {
    // If pseudo node, we use port home/socatpty1 instead of /dev/xyz
    if (serial_port.find("socatpty1") != string::npos) {
        string homepath = getenv("HOME");
        regex match("\\$\\(env HOME\\)");
        serial_port = regex_replace(serial_port, match, homepath);
    }
    serial::Timeout to = serial::Timeout::simpleTimeout(100);//create a timeout instance
    sp.setTimeout(to);//give the timeout to serial
    sp.setPort(serial_port);//Set the name of the serial port to be opened
    sp.setBaudrate(baudrate);//Set the baud rate for serial communication
}
// Retries because pseudo_arduino creates the socat PTY symlinks asynchronously:
// on a cold start this node can get here before $HOME/socatpty1 exists.
bool connectToArduino() {
    const int max_attempts = 50;  // ~5 s at 100 ms per attempt
    auto logger = rclcpp::get_logger("ikin");
    RCLCPP_INFO_STREAM(logger, "Trying to open serial port: " << sp.getPort());
    for (int attempt = 0; attempt < max_attempts && rclcpp::ok(); attempt++) {
        try {
            sp.open();//open the serial
        } catch(serial::IOException& e) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            continue;
        }
        if(sp.isOpen()){
            RCLCPP_INFO_STREAM(logger, "serial port is opened.");
            return true;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    RCLCPP_ERROR_STREAM(logger, "Unable to open port " << sp.getPort()
        << " after " << max_attempts << " attempts.");
    return false;
}
void sendToSerial(double mot1, double mot2, double mot3) {
    if (isnan(mot1) || isnan(mot2) || isnan(mot3))
    {
        RCLCPP_WARN(rclcpp::get_logger("ikin"),
            "Rejected angles: %.2f, %.2f, %.2f", mot1, mot2, mot3);
    } else {
        // The trailing '\n' is the only delimiter the consumers have; dropping
        // it breaks framing in both pseudo_arduino and Control_Delta.ino.
        stringstream datastream;
        datastream << std::fixed << std::setprecision(1) << mot1 << ", " << mot2 << ", " << mot3 << "\n";
        string data=datastream.str();
        sp.write(data);
    }
}

// Unpack the request, calculate the inverse kinematics, send the angles to the Arduino and fill the response
// Add your code here

void callback(
    const std::shared_ptr<delta_robot_serial::srv::Ikin::Request> &req,
    const std::shared_ptr<delta_robot_serial::srv::Ikin::Response> &res)
{
    double position[3] = {req->x, req->y, req->z};
    double phi_1[3];
    double phi_2[3];
    double phi_3[3];

    // Compute inverse kinematics
    inverse_kinematics(position, 0.0, phi_1);
    inverse_kinematics(position, 120.0, phi_2);
    inverse_kinematics(position, 240.0, phi_3);  // check the actual function signature

    if (std::isnan(phi_1[0]) || std::isnan(phi_2[0]) || std::isnan(phi_3[0])) {
        RCLCPP_WARN(
            rclcpp::get_logger("ikin"),
            "Inverse kinematics returned NaN. Request ignored."
        );
        // Propagate the failure so the client can detect it; leaving the
        // response at its default 0.0 would look like a valid (0,0,0) angle.
        res->phi_11 = std::nan("");
        res->phi_21 = std::nan("");
        res->phi_31 = std::nan("");
        return;
    }

    sendToSerial(phi_1[0], phi_2[0], phi_3[0]);

    res->phi_11 = phi_1[0];
    res->phi_21 = phi_2[0];
    res->phi_31 = phi_3[0];
}

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("ikin_server");
    auto server = node->create_service<delta_robot_serial::srv::Ikin>("/ikin_server", &callback);
    // Create the inverse kinematics service
    // Add your code here
    node->declare_parameter("baudrate", 115200);
    node->declare_parameter("serial_port", "$(env HOME)/socatpty1");

    int baudrate;
    string serial_port;

    node->get_parameter("baudrate",baudrate);
    node->get_parameter("serial_port",serial_port);

    setSerialPort(serial_port, baudrate);

    if(!connectToArduino()) return -1;

    //spin
    rclcpp::spin(node);
    rclcpp::shutdown();
    //close the serial
    sp.close();
    return 0;
}
