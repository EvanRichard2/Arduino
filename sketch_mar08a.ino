#include <Servo.h>
Servo servoleft;
Servo servoright;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

servoleft.attach(13);
servoright.attach(12);

servoright.writeMicroseconds(1300);
servoleft.writeMicroseconds(1300);
delay(150);
Serial.print("Finnished Fix");


servoleft.writeMicroseconds(1700);;
servoright.writeMicroseconds(1300);
delay(2500);
Serial.print("Finnished moving forward");


servoleft.writeMicroseconds(1300);
servoright.writeMicroseconds(1300);
delay(590);
Serial.print("Finnished Left");


servoleft.writeMicroseconds(1700);;
servoright.writeMicroseconds(1300);
delay(2500);
Serial.print("Finnished moving forward");


servoleft.writeMicroseconds(1700);
servoright.writeMicroseconds(1700);
delay(620);
Serial.print("Finnished Right");


























servoleft.writeMicroseconds(1500);       //Stop
servoright.writeMicroseconds(1500);
delay(2000);
Serial.print("Finnished Stop");













}

void loop() {
  // put your main code here, to run repeatedly:

}
