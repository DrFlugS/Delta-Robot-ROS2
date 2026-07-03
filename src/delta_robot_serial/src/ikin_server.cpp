#include <serial/serial.h>
#include <string>
#include <regex>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
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
bool connectToArduino() {
    try {
        std::cout << "Trying to open serial port: " << sp.getPort();
        sp.open();//open the serial
    } catch(serial::IOException& e) {
        std::cerr << "Unable to open port."<< e.what();
        return false;
    }
    if(sp.isOpen()){
        std::cout << "serial port is opened.";
    } else {
        return false;
    }
    return true;
}
void sendToSerial(double mot1, double mot2, double mot3) {
    if (isnan(mot1) || isnan(mot2) || isnan(mot3))
    {
        RCLCPP_WARN(rclcpp::get_logger("ikin"),
            "Rejected angles: %.2f, %.2f, %.2f", mot1, mot2, mot3);
    } else {
        stringstream datastream;
        datastream << std::fixed << std::setprecision(1) << mot1 << ", " << mot2 << ", " << mot3;
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
