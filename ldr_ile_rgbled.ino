int ldr = A0;
int isik;
int K = 9;
int M = 10;
int Y = 11;

void setup() {
  pinMode(K, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(Y, OUTPUT);
  Serial.begin(9600); 
}
void loop() {
  isik = analogRead(ldr);
  Serial.println(isik); 
  delay(50);
  
  if (isik > 600) { 
    analogWrite(K, 0);
    analogWrite(M, 0);
    analogWrite(Y, 0);
  } else if (isik > 500) { 
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 0);
  } else if (isik > 300) {
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 128);
  } else {
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 255);
  }
}