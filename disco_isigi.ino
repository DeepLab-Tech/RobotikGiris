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
  int rdeger = random(0,255);
  int bdeger = random(0,255);
  int gdeger = random(0,255);
  
  analogWrite(R, rdeger);
  analogWrite(B, bdeger);
  analogWrite(G, gdeger);
  delay(1000);
}