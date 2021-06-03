int egimSensoru = 8;
int led = 7;
int egim;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(egimSensoru, INPUT_PULLUP);
}

void loop()
{
 egim = digitalRead(egimSensoru);
  if (egim == 0){
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
}