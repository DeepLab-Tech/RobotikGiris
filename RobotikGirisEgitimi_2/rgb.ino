int R = 11;
int B = 10;
int G = 9;

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 255);
  delay(1000);
}
