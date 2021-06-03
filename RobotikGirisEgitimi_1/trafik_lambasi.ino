
void setup()
{
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 Serial.begin(9600);
}

void loop()
{
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 Serial.println("DUR!");
 delay(2000);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 Serial.println("HAZIRLAN!");
 delay(1000);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 Serial.println("GEC!");
 delay(2000);
}