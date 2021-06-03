void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(9, HIGH);
  Serial.println("Led yaniyor");
  delay(1000); 
  digitalWrite(9, LOW); 
  Serial.println("Led yanmiyor");
  delay(1000); 
}