int potPin = A0;
int potDeger;

int R = 9;
int B = 10;
int G = 11;

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 potDeger = map( analogRead(potPin), 0, 1023, 0, 900);
  Serial.print("Potansiyometrede Okunan Deger = ");
  Serial.println(potDeger);
  
  if (potDeger<300){
    analogWrite(R,255);
    analogWrite(B, 0);
    analogWrite(G, 0);
  } else if (potDeger<600){
    analogWrite(R,0);
    analogWrite(B, 255);
    analogWrite(G,0);
  } else if (potDeger<900){
    analogWrite(R,0);
    analogWrite(B, 0);
    analogWrite(G, 255); }
}