int a = 1200;
float b = 14.7;
char c = 'x';


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Arduino Egitimi");
  Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println("_______________________");
  delay(3000); //3 sanıye aralıklarla yazsın
}