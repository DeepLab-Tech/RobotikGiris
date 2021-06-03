int buton = 0;

void setup()
{
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buton = digitalRead(8);
  if (buton == 1 ){
    Serial.println("Buton 1 durumunda");
    
  } else {
    Serial.println("Buton 0 durumunda");
   
  }
}