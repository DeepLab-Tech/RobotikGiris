int gazSensoru = A0;
int deger;
int esikDegeri = 280;
int buzzer = 8;
int led = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  deger = analogRead(gazSensoru);
  Serial.print("Gaz seviyesi = ");
  Serial.println(deger);
  delay(20);
  
  if (deger> esikDegeri){
    Serial.println("Tehlikeli gaz seviyesi!");
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  } else {
    Serial.println("Normal gaz seviyesi.");
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
 
}