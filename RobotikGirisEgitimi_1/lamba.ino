int buton = 0;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buton = digitalRead(8);
  if (buton == 1 ){
    digitalWrite(13,HIGH);
    Serial.println("Buton 1 durumunda");
    Serial.println("Isik acik");
  } else {
    digitalWrite(13,LOW);
    Serial.println("Buton 0 durumunda");
    Serial.println("Isik kapali");
  }
}