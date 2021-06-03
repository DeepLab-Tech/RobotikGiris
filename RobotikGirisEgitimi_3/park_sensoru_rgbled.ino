int trigPin = 6;
int echoPin = 7;
int buzzer = 8;

int sure;
int uzaklik;

int K = 9;
int M = 10;
int Y = 11;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(K, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(Y, OUTPUT);
  
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delay(2); 
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  
  sure = pulseIn(echoPin, HIGH);
  uzaklik = sure/29.1/2;
  
  if (uzaklik < 10){
    digitalWrite(buzzer, HIGH);
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 0);
    delay(1);
    digitalWrite(buzzer,LOW);
    analogWrite(K, 0);
    analogWrite(M, 0);
    analogWrite(Y, 0);
    delay(1);
    
  } else if (uzaklik < 30){ 
    digitalWrite(buzzer, HIGH);
    analogWrite(K, 255);
    analogWrite(M, 0);
    analogWrite(Y, 255);
    delay(100);
    digitalWrite(buzzer,LOW);
    analogWrite(K, 0);
    analogWrite(M, 0);
    analogWrite(Y, 0);
    delay(100); 
    
  } else if (uzaklik < 60){ 
    digitalWrite(buzzer, HIGH);
    analogWrite(K, 0);
    analogWrite(M, 0);
    analogWrite(Y, 255);
    delay(500);
    digitalWrite(buzzer,LOW);
    analogWrite(K, 0);
    analogWrite(M, 0);
    analogWrite(Y, 0);
    delay(500); 
    
  } else { 
    digitalWrite(buzzer,LOW);
    analogWrite(K, LOW);
    analogWrite(M, LOW);
    analogWrite(Y, LOW);
    delay(500); }
}