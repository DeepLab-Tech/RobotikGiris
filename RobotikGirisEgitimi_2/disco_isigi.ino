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
  int rdeger = random(0,255);
  int bdeger = random(0,255);
  int gdeger = random(0,255);
  
  analogWrite(R, rdeger);
  analogWrite(B, bdeger);
  analogWrite(G, gdeger);
  delay(500);
}