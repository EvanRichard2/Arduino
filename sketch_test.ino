#include <Servo.h> 
Servo servoLeft; 
Servo servoRight;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  
servoLeft.attach(11); 
servoRight.attach(9); 

servoRight.writeMicroseconds(1700);     //Second right
servoLeft.writeMicroseconds(1700);
delay(430);

servoRight.writeMicroseconds(1500);
servoLeft.writeMicroseconds(1500);      //Stop
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
