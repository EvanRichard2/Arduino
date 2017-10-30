void setup() {
  // put your setup code here, to run once:
int ledPin = 13; //For visual as well
int speakerPin = 11; //Speaker or Piezo buzzer on pin 11
pinMode(ledPin, OUTPUT); // Setting both pins to outputs
  pinMode(speakerPin, OUTPUT);    
}
void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMilliseconds)
{
  int x;      
  long delayAmount = (long)(1000000/frequencyInHertz);
  long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
  for (x=0;x<loopTime;x++)    
  {    
    digitalWrite(speakerPin,HIGH);
    delayMicroseconds(delayAmount);
    digitalWrite(speakerPin,LOW);
    delayMicroseconds(delayAmount);
  }    
  delay(20);
}

void loop() {
  // put your main code here, to run repeatedly:
 beep(speakerPin, NOTE_D5, 100); 
  delay(80);
  beep(speakerPin, NOTE_F5, 100); 
  delay(80);
  beep(speakerPin, NOTE_D6, 200);
  delay(250);
  
  beep(speakerPin, NOTE_E6, 200); 
  delay(200);
  beep(speakerPin, NOTE_F6, 100); 
  delay(100);
  beep(speakerPin, NOTE_E6, 100); 
  delay(80);
  beep(speakerPin, NOTE_F6, 100); 
  delay(80);
  beep(speakerPin, NOTE_E6, 100); 
  delay(80);
  beep(speakerPin, NOTE_C6, 100); 
  delay(80);
  beep(speakerPin, NOTE_A5, 100); 
  delay(300);
  
  beep(speakerPin, NOTE_A5, 200); 
  delay(100);
  beep(speakerPin, NOTE_D5, 200); 
  delay(100);
  beep(speakerPin, NOTE_F5, 100); 
  delay(100);
  beep(speakerPin, NOTE_G5, 100); 
  delay(100);
  beep(speakerPin, NOTE_A5, 100); 
  delay(500);
  
  beep(speakerPin, NOTE_A5, 200); 
  delay(100);
  beep(speakerPin, NOTE_D5, 200); 
  delay(100);
  beep(speakerPin, NOTE_F5, 100); 
  delay(100);
  beep(speakerPin, NOTE_G5, 100); 
  delay(100);
  beep(speakerPin, NOTE_E5, 100); 
  delay(500);
  
  
  
  beep(speakerPin, NOTE_D5, 100); 
  delay(80);
  beep(speakerPin, NOTE_F5, 100); 
  delay(80);
  beep(speakerPin, NOTE_D6, 200); 
  delay(250);
  
  beep(speakerPin, NOTE_D5, 100); 
  delay(80);
  beep(speakerPin, NOTE_F5, 100); 
  delay(80);
  beep(speakerPin, NOTE_D6, 200);
  delay(250);
  
  beep(speakerPin, NOTE_E6, 200); 
  delay(200);
  beep(speakerPin, NOTE_F6, 100); 
  delay(100);
  beep(speakerPin, NOTE_E6, 100); 
  delay(80);
  beep(speakerPin, NOTE_F6, 100); 
  delay(80);
  beep(speakerPin, NOTE_E6, 100); 
  delay(80);
  beep(speakerPin, NOTE_C6, 100); 
  delay(80);
  beep(speakerPin, NOTE_A5, 100); 
  delay(300);
  
  beep(speakerPin, NOTE_A5, 200); 
  delay(100);
  beep(speakerPin, NOTE_D5, 200); 
  delay(100);
  beep(speakerPin, NOTE_F5, 100); 
  delay(100);
  beep(speakerPin, NOTE_G5, 100); 
  delay(100);
  beep(speakerPin, NOTE_A5, 300);
  delay(100);
  beep(speakerPin, NOTE_A5, 200);
  delay(100);
  beep(speakerPin, NOTE_D5, 300);
  delay(2000);
}
