#include <Servo.h>

Servo servoMotor;       // creates an instance of the servo object to control a servo
int servoPin = 9;       // Control pin for servo motor
//int servoSpeed = 175;   // set a variable for the speed of the continuous servo, can be sped up or slowed down
int servoSpeed = 180;

void setup() {
  Serial.begin(9600);       // initialize serial communications
  servoMotor.attach(servoPin);  // attaches the servo on pin 3 to the servo object
   
} 
 
void loop() {
 
  servoMotor.write(servoSpeed);//run the continuous servo at the speed the var is set to
  
}
