int egimSensoru = 9;
int led = 7;
int egim;
int buzzer = 8;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(egimSensoru, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop()
{
  egim = digitalRead(egimSensoru);
  
  if (egim == 0) {
    digitalWrite(led,HIGH);
    digitalWrite(buzzer, HIGH);
    Serial.println("Egim var.");
  } else { 
    digitalWrite(led,LOW);
    digitalWrite(buzzer, LOW);
    Serial.println("Egim yok.");
  }

}