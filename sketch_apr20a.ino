void setup(){
tone(4, 3000, 1000);
delay(1000);
Serial.begin(9600);
}
void loop(){
float tLeft = float(rcTime(8));
float tRight = float(rcTime(6));
float ndShade;
ndShade = tRight / (tLeft+tRight) - 0.5;
for(int i = 0; i<(ndShade * 40) + 20; i++)
{
Serial.print(' ');
}
Serial.println('*');
delay(100);
}
long rcTime(int pin)
{
pinMode(pin, OUTPUT);
digitalWrite(pin, HIGH);
delay(5); // ..for 5 ms
pinMode(pin, INPUT);
digitalWrite(pin, LOW);
long time = micros();
while(digitalRead(pin));
time = micros() - time;
return time;
}
