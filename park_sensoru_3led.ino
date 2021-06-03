int trigPin = 6;
int echoPin = 7;
int buzzer = 8;

int sure;
int uzaklik;

int K = 9;
int S = 10;
int Y =11;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(K, OUTPUT);
  pinMode(S, OUTPUT);
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
    digitalWrite(K, HIGH);
    digitalWrite(S, LOW);
    digitalWrite(Y, LOW);
    delay(50);
    digitalWrite(buzzer,LOW);
    digitalWrite(K, LOW);
    digitalWrite(S, LOW);
    digitalWrite(Y, LOW);
    delay(50);
    
  } else if (uzaklik < 30){ 
    digitalWrite(buzzer, HIGH);
    digitalWrite(K, LOW);
    digitalWrite(S, HIGH);
    digitalWrite(Y, LOW);
    delay(100);
    digitalWrite(buzzer,LOW);
    digitalWrite(K, LOW);
    digitalWrite(S, LOW);
    digitalWrite(Y, LOW);
    delay(100); 
    
  } else if (uzaklik < 60){ 
    digitalWrite(buzzer, HIGH);
    digitalWrite(K, LOW);
    digitalWrite(S, LOW);
    digitalWrite(Y, HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    digitalWrite(K, LOW);
    digitalWrite(S, LOW);
    digitalWrite(Y, LOW);
    delay(500); 
    
  } else { 
    digitalWrite(buzzer,LOW);
    digitalWrite(K, LOW);
    digitalWrite(S, LOW);
    digitalWrite(Y, LOW);
     }
}