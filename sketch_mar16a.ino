#include <Servo.h> 
Servo servoLeft; 
Servo servoRight;

void setup() {
  // put your setup code here, to run once:
servoLeft.attach(13); 
servoRight.attach(12); 

servoRight.writeMicroseconds(1300);     //Fix
servoLeft.writeMicroseconds(1300);
delay(120);


servoLeft.writeMicroseconds(1700); 
servoRight.writeMicroseconds(1300);
delay(1000);


servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1300);      //Second left
delay(680);

servoRight.writeMicroseconds(1500);
servoLeft.writeMicroseconds(1500);
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
