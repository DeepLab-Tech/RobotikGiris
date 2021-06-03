int pot = A0;
int potDeger;
int led = 9;

void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potDeger = analogRead(pot);
  potDeger = map(potDeger, 0, 1023, 0, 255);
  analogWrite(led, potDeger);
  Serial.print("Potansiyometrede Okunan Deger = ");
  Serial.println(potDeger);
  delay(10);

}