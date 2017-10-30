 #include <Servo.h> 
Servo servoLeft; 
Servo servoRight;

void setup() {
  // put your setup code here, to run once:
servoLeft.attach(13); 
servoRight.attach(12);

servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);      //First start
delay(1500);

servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);      //Stop
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
