void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for(int i = 1; i <= 9001; i++)
{
Serial.println(i);
delay(0);
}
Serial.println("Over 9000! -Vegita ");
}




void loop(){
  // put your main code here, to run repeatedly:
}
