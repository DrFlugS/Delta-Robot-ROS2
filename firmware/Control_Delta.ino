#include <Servo.h>
#include <math.h>
#include <stdio.h>

Servo servo1;
Servo servo2;
Servo servo3;

double target_angle[3];
String inputText = "";

void setup() {
  servo1.attach(5);
  servo2.attach(6);
  servo3.attach(7);
  Serial.begin(115200);
  // Bounds readStringUntil() on a truncated frame; the default 1000 ms would
  // stall the loop for a full second. A 16-byte command takes ~1.4 ms.
  Serial.setTimeout(20);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
}

void loop() {
  // Read one complete '\n'-terminated command. The old byte-at-a-time loop cost
  // ~160 ms per command, letting the 30 Hz host overflow the 64-byte RX buffer.
  if (Serial.available() > 0) {
    inputText = Serial.readStringUntil('\n');   // terminator consumed, not returned
  }

  if(inputText != "") {   // check the string which has been read just now
    // A complete command has exactly two commas: a timed-out read returns a
    // truncated frame like "90.0, 45.0, 2" that still parses to a valid angle.
    int commas = 0;
    for (unsigned int i = 0; i < inputText.length(); i++) {
      if (inputText[i] == ',') commas++;
    }

    string2double(inputText, target_angle, 3);   // string to double
    double phi_1=target_angle[0];
    double phi_2=target_angle[1];
    double phi_3=target_angle[2];

    if (commas != 2) {
      // Truncated or garbled frame: ignore, hold the last position.
    } else if (phi_1<0. || phi_2<0. || phi_3<0. || phi_1>90. || phi_2>90. || phi_3>90.){
      // Outside the servos' mechanical range: ignore, hold the last position.
    } else {
      servo1.write((int)lround(phi_1));
      servo2.write((int)lround(phi_2));
      servo3.write((int)lround(phi_3));
    }
  }
  char s[4];
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
