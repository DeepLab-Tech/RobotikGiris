int trigPin = 6;
int echoPin = 7;
int buzzer = 8;

int sure;
int uzaklik;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
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
  if (uzaklik < 4){
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(buzzer,LOW);
    delay(1);
  } else if (uzaklik < 15){ 
    digitalWrite(buzzer, HIGH);
    delay(10);
    digitalWrite(buzzer,LOW);
    delay(10); 
  } else if (uzaklik < 30){ 
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100); 
  } else if (uzaklik < 60){ 
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500); 
  } else { 
    digitalWrite(buzzer,LOW);
     }
}