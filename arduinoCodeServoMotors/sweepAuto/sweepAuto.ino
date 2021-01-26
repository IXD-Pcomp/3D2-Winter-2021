/*
 * Doug Whitton Jan 2021
 * Thiscode works with a standard servo motor 
 * It makes the servo arm rotate automatically back and forth 
 */

#include <Servo.h>

Servo servoMotor;       // creates an instance of the servo object to control a servo
int servoPin = 9;       // Control pin for servo motor
int servoAngle = 0;     // variable for changing the angle of the servo 0 - 180

void setup() {
  Serial.begin(9600);                // initialize serial communications
  servoMotor.attach(servoPin);       // attaches the servo on pin 3 to the servo object
} 
 
void loop() {
  
  int x = 1;
   for (int i = 0; i > -1; i = i + x){
    servoMotor.write(i);                 //set the angle of the servo to i
      
      if (i == 180) x = -1;             // switch direction at the max 180 degree point
      delay(10);                         // change the delay to speed up or slow down
      Serial.println(i);                // print i to the serial monitor to make sure the numbers are OK
      
   }  
}
