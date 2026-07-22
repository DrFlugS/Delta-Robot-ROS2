#include <Servo.h>
#include <math.h>
#include <stdio.h>

Servo servo1;
Servo servo2;
Servo servo3;

double target_angle[3];
char inByte;
String inputText = "";

void setup() {
  // Do not modify
  servo1.attach(5);
  servo2.attach(6);
  servo3.attach(7);
  Serial.begin(115200);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
}

void loop() {
  // Do not modify
  while (Serial.available() > 0) {
    inByte = Serial.read(); // the read() function can read only one character every time
    inputText += inByte; // append the inByte to the inputText
    delay(10);
    // keep reading until there is no bytes
  }

  if(inputText != "") {   // check the string which has been read just now
    string2double(inputText, target_angle, 3);   // string to double
    double phi_1=target_angle[0];
    double phi_2=target_angle[1];
    double phi_3=target_angle[2];

    if (phi_1<0. || phi_2<0. || phi_3<0. || phi_1>90. || phi_2>90. || phi_3>90.){

    } else {
      speed_smoother(phi_1, phi_2, phi_3);
    }
  }
  char s[2];
  Serial.print("J:");
  sprintf(s,"%2d",servo1.read());
  Serial.print(s);
  Serial.print(",");
  sprintf(s,"%2d",servo2.read());
  Serial.print(s);
  Serial.print(",");
  sprintf(s,"%2d",servo3.read());
  Serial.print(s);
  Serial.println("");
  inputText = ""; //clear the string for next time use 
  delay(20); // wait 20 ms
}

void string2double(String str, double* numbers, int size) {
  // Do not modify
  int startIndex = 0;
  int endIndex = str.indexOf(',');
  int index = 0;
  
  // Extract numbers and conver them into double
  while (endIndex != -1 && index < size) {
    char c_a[str.substring(startIndex, endIndex).length() + 1];
    str.substring(startIndex, endIndex).toCharArray(c_a, sizeof(c_a));
    numbers[index++] = atof(c_a);
    startIndex = endIndex + 1;
    endIndex = str.indexOf(',', startIndex);
  }
  
  // Convert the last number
  if (index < size) {
    char c_a[str.substring(startIndex).length() + 1];
    str.substring(startIndex).toCharArray(c_a, sizeof(c_a));
    numbers[index] = atof(c_a);
  }
}

void speed_smoother(double target_phi1, double target_phi2, double target_phi3) {
  // This is a very basic joint space linear interpolator to smooth the jump in speed in point-2-point motions
  // Feel free to write a more sophisticated smoother (e.g. polynomial/steps proportional to angle difference/steps as a function argument etc.)
  int sampling_time = 20;
  int steps = 50;
  // Add your code here
  
}
