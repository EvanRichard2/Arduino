#include <Servo.h> 
Servo servoLeft; 
Servo servoRight;

void setup() {
  
  // put your setup code here, to run once:
Serial.begin(9600);
  
servoLeft.attach(13); 
servoRight.attach(12); 

servoRight.writeMicroseconds(1300);     //Fix
servoLeft.writeMicroseconds(1300);
delay(120);
Serial.print("finished turn"); 

servoLeft.writeMicroseconds(1700); 
servoRight.writeMicroseconds(1300);     // First start
delay(3000);
Serial.print("finished forward");

servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1300);      //First left
delay(520);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1700);      // Second start
delay(2800);
Serial.print("finished forward");

servoRight.writeMicroseconds(1700);     //First right
servoLeft.writeMicroseconds(1700);
delay(580);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);   // Third start
servoLeft.writeMicroseconds(1700);
delay(2200);
Serial.print("finished forward");

servoRight.writeMicroseconds(1700);   //Found dead end ( Diagnal turn )
servoLeft.writeMicroseconds(1700);
delay(330);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);   // Third start
servoLeft.writeMicroseconds(1700);
delay(150);
Serial.print("finished forward");

servoRight.writeMicroseconds(1700);
servoLeft.writeMicroseconds(1700);      //Turn around
delay(950);
Serial.print("finished turn");

servoRight.writeMicroseconds(1300);   // Third start
servoLeft.writeMicroseconds(1700);
delay(150);
Serial.print("finished forward");

servoRight.writeMicroseconds(1300);   // Fourth start
servoLeft.writeMicroseconds(1700);
delay(300);
Serial.print("finished turn"); 


servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1300);      //Turn around
delay(100);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);   // Fifth start
servoLeft.writeMicroseconds(1700);
delay(70);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1300);      //Turn around
delay(30);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);   // Sixth start
servoLeft.writeMicroseconds(1700);
delay(2000);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1300);      //Second left
delay(520);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);   // Seventh start
servoLeft.writeMicroseconds(1700);
delay(29
00);
Serial.print("finished forward");

servoRight.writeMicroseconds(1700);     //Second right
servoLeft.writeMicroseconds(1700);
delay(560);
Serial.print("finished turn"); 

servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1700);      // Eigth start
delay(3150);
Serial.print("finished forward");

servoRight.writeMicroseconds(1500);
servoLeft.writeMicroseconds(1500);      //Stop
delay(2000);
Serial.print("finished turn"); 



}

void loop() {
  // put your main code here, to run repeatedly:

}
