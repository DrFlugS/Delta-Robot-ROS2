//
// Created by jsy on 08.06.24.
//

#include <stdlib.h>
#include <rclcpp/rclcpp.hpp>
#include <serial/serial.h>
#include <string>

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <thread>
using namespace std;
// Mock angles of the virtual delta robot in degrees (initial value at 0°,0°,0°)
// Enter your code here
double target_angle[3] = {0, 0, 0};
// Persistent across ticks: a command can arrive split, so the tail after the
// last '\n' is an incomplete frame. Never clear this at the end of a callback.
string rx_buffer = "";
// Only the "arduino" side of the socat PTY pair is ours; socatpty1 (the
// computer side) is opened by delta_joint_pub / ikin_server.
serial::Serial sp2;//pseudo serial port on arduino
void string2double(const string& str, double* numbers, int size) {
    int startIndex = 0;
    int endIndex = str.find(',',0);
    int index = 0;

    // extract every number and transfer it to double
    while (endIndex != -1 && index < size) {
        numbers[index++] = stod(str.substr(startIndex, endIndex-startIndex));
        startIndex = endIndex + 1;
        endIndex = str.find(',', startIndex);
    }

    // deal with the last number
    if (index < size) {
        numbers[index] = stod(str.substr(startIndex,endIndex-startIndex));
    }
}
class PseudoArduino:public rclcpp::Node
{

public:
    PseudoArduino():Node("pseudo_arduino")
    {
        timer = this->create_wall_timer(std::chrono::milliseconds(20), std::bind(&PseudoArduino::timer_callback, this));
        baudrate_ = this->declare_parameter("baudrate", 115200);
        char *pathvar;
        pathvar = getenv("HOME");
        string home_path=pathvar;
        serial::Timeout to = serial::Timeout::simpleTimeout(100);//create a timeout instance
        sp2.setTimeout(to);//give the timeout to serial
        sp2.setPort(home_path+"/socatpty2");//pseudo serial port on arduino
        sp2.setBaudrate(baudrate_);//Set the baud rate for serial communication
    }

    int baudrate() const { return baudrate_; }
private:
    int baudrate_ = 115200;
    rclcpp::TimerBase::SharedPtr timer;
    double current_angle[3] = {0, 0, 0};  // add this
    double step_size = 1.0;  // degrees per cycle, tune this

    void timer_callback()
    {
        size_t n = sp2.available();
        if(n!=0) {
            sp2.read(rx_buffer, n);//appends; bytes are already buffered, so this never blocks
        }

        // Drain every complete '\n'-terminated command, keeping the last:
        // these are setpoints, so earlier ones in the same tick are stale.
        string line;
        size_t nl;
        while ((nl = rx_buffer.find('\n')) != string::npos) {
            line = rx_buffer.substr(0, nl);
            rx_buffer.erase(0, nl + 1);
        }

        if(line != "") {
            try {
                string2double(line, target_angle, 3);
            } catch (const std::exception &e) {
                // A garbled frame would otherwise throw out of stod and kill the node.
                RCLCPP_WARN_STREAM(this->get_logger(),
                    "Ignoring malformed serial data '" << line << "': " << e.what());
            }
        }

        // Guard against a writer that never terminates its frames.
        if (rx_buffer.size() > 256) {
            RCLCPP_WARN_STREAM(this->get_logger(),
                "Discarding " << rx_buffer.size() << " buffered bytes with no line terminator");
            rx_buffer.clear();
        }

        // Gradually move towards target instead of instant jump
        for (int i = 0; i < 3; i++) {
            double diff = target_angle[i] - current_angle[i];
            if (fabs(diff) > step_size) {
                current_angle[i] += (diff > 0) ? step_size : -step_size;
            } else {
                current_angle[i] = target_angle[i];
            }
        }

        double phi_1 = current_angle[0];  // use current, not target
        double phi_2 = current_angle[1];
        double phi_3 = current_angle[2];

        if (phi_1<0. || phi_2<0. || phi_3<0. || phi_1>90. || phi_2>90. || phi_3>90.){
        } else {
            stringstream datastream;
            datastream << fixed << setprecision(0)
                <<"J:"
                << right << setw(2)<<phi_1 << ","
                << right << setw(2)<<phi_2 << ","
                << right << setw(2)<< phi_3 <<"\r\n";
            string data=datastream.str();
            sp2.write(data);
        }
        // rx_buffer deliberately NOT cleared here: see its declaration.
    }
};


int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PseudoArduino>();

    // After node construction so the baudrate parameter is known; the retry
    // loop below tolerates socat's asynchronous startup latency.
    std::ostringstream socat_cmd;
    socat_cmd << "socat -d -d pty,b" << node->baudrate() << ",link=$HOME/socatpty1  "
              << "pty,b" << node->baudrate() << ",link=$HOME/socatpty2 &";
    system(socat_cmd.str().c_str());//open a pair of pseudo serial ports

    // The PTY symlinks may not exist yet, so retry opening for a few seconds.
    const int max_attempts = 50;  // ~5 s at 100 ms per attempt
    bool port_open = false;
    for (int attempt = 0; attempt < max_attempts && rclcpp::ok(); attempt++) {
        try {
            sp2.open();//open the serial
            port_open = true;
            break;
        } catch(serial::IOException& e) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    if(!port_open) {
        RCLCPP_ERROR_STREAM(node->get_logger(),"Unable to open port.");
        return -1;
    }
    RCLCPP_INFO_STREAM(node->get_logger(),"serial port is opened.");

    //spin
    rclcpp::spin(node);
    rclcpp::shutdown();
    //close the serial
    sp2.close();
    return 0;
}
