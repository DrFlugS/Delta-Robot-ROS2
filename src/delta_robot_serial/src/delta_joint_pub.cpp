#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <direct_kinematics.h>
#include <iostream>
#include <serial/serial.h>
#include <vector>
#include <string>
#include <regex>
#include <chrono>
#include <thread>
// Import the rclcpp, joint_state and the direct_kinematics header
// Add your code here

using namespace std;
serial::Serial sp;
std::vector<string> deltaLinkNames = {"platform_base_x",
    "platform_base_y",
    "platform_base_z",
    "proximal_base1",
    "distal_proximal_1_y",
    "distal_proximal_1_x",
    "proximal_base2",
    "distal_proximal_3_y",
    "distal_proximal_3_x",
    "proximal_base3",
    "distal_proximal_5_y",
    "distal_proximal_5_x"};
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
// exiting on the first failure left /joint_states unpublished and RViz untransformed.
bool connectToArduino() {
    const int max_attempts = 50;  // ~5 s at 100 ms per attempt
    auto logger = rclcpp::get_logger("delta_joint_pub");
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
bool readDeltaAngles(double fAngles[3]) {
    size_t n = sp.available();//Get the number of bytes in the buffer
    if(n != 0) {
        uint8_t buffer[12];
        if (n == 12) {//check if the length of the buffer data is correct
            sp.read(buffer, n);//read the data
            if (buffer[0] == 74 && buffer[1] == 58) {//if the begin of the buffer is "J:", J's ascii is 74, and :'s ascii is 58
                // Slice the two-digit angle fields directly from the buffer
                // (no intermediate vector allocation): "J:AA,BB,CC\r\n"
                char* cbuf = reinterpret_cast<char*>(buffer);
                string sAngle1(cbuf + 2, 2);
                string sAngle2(cbuf + 5, 2);
                string sAngle3(cbuf + 8, 2);
                fAngles[0] = stof(sAngle1);
                fAngles[1] = stof(sAngle2);
                fAngles[2] = stof(sAngle3);
                return true;
            }
        } else {
            sp.flushInput(); //If the data in the buffer is incorrect then the buffer is emptied to avoid segment errors
        }
    }
    return false;
}

// Write the DeltaJointPub class
// In the constructor, set the baudrate and serial_port parameters and instantiate the necessary objects for publishing JointStates
// In the publishing loop, read the delta angles, calculate the direct_kinematics and populate the JointState message to publish
// Add your code here

class DeltaJointPub : public rclcpp::Node
{
    public:
        DeltaJointPub() : Node("DeltaJointPub")
        {
        this->declare_parameter("baudrate", 115200);
        this->declare_parameter("serial_port", "$(env HOME)/socatpty1");

        int baudrate;
        std::string serial_port;

        this->get_parameter("baudrate", baudrate);
        this->get_parameter("serial_port", serial_port);

        setSerialPort(serial_port, baudrate);

        publisher_ = this->create_publisher<sensor_msgs::msg::JointState>("joint_states", 10);
        timer_ = this->create_wall_timer(20ms, std::bind(&DeltaJointPub::timer_callback, this));
        }
    
    private:
        void timer_callback()
        {
            double Joint_angles[3];

            if(readDeltaAngles(Joint_angles))
            {
                auto msg = sensor_msgs::msg::JointState();
                msg.header.stamp = this->get_clock()->now();
                msg.name = deltaLinkNames;
                msg.position = direct_kinematics(Joint_angles);

                publisher_->publish(msg);
            }
        }
        rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv) {
    // Initialize rclcpp, create the node, connect to the Arduino and spin the node until shutdown (don't forget to close the serial port before returning)
    // Add your code here
    rclcpp::init(argc, argv);
    auto node = std::make_shared<DeltaJointPub>();

    if(!connectToArduino()) return -1;

    rclcpp::spin(node);
    rclcpp::shutdown();
    sp.close();

    return 0;
}
