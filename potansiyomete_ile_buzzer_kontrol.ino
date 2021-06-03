
int pot A0;

void setup() 
{
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
int potDeger = analogRead(pot);
  
potDeger=map(potDeger,0,1023,0,255);
  
Serial.println(potDeger);
delay(100);
analogWrite(9,potDeger);

}