int ldr = A0;
int isik;
int K = 9;
int M = 10;
int Y = 11;

//maksimum deger 679
//minimum deger 6

//570-530 arası kırmızı (isik > 530)
//530-500 arası turuncu (isik > 500)
// else - isik<500 - sarı renk

void setup()
{
  pinMode(K, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(Y, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  isik = analogRead(ldr);
  Serial.print("Ortamdaki isik seviyesi = ");
  Serial.println(isik);
  delay(50);
  
  if (isik > 570){
    analogWrite(K, 0);
    analogWrite(M, 0);
    analogWrite(Y, 0);
    Serial.println("Sabah oldu");
  } else if (isik > 530) {
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 0);
  } else if (isik > 500){ // turuncu
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 128);
  } else {
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 255);
  }
}