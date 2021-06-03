int buton = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  buton = digitalRead(8);
  if (buton == 1){
    digitalWrite(9,HIGH);}
  else {
    digitalWrite(9,LOW); }
}