#include <Servo.h>
//Tommy Shinozaki
//12-1-2018
//Pick'n'Place Arduino Sketch
Servo upper;  //upper arm
Servo lower;  //lower arm

void setup() {
upper.attach(9); //Upper arm is connected to pin 9
lower.attach(10);//Lower arm is connected to pin 10
}

void loop() {
upper.write(90);   //Moves the upper arm
lower.write(90);   //Moves the lower arm
}
