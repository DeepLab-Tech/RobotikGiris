int pir = 8;
int deger = 0;
int buzzer = 12;

void setup()
{
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  deger = digitalRead(pir);
  Serial.println(deger);
  
  if (deger == HIGH){
    digitalWrite(buzzer, HIGH);
    Serial.println("Hirsiz var!");
  } else {
    digitalWrite(buzzer, LOW);
    Serial.println("Hirsiz yok!"); }
  
}