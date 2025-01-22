const int b1=3;
const int b2=4;
const int b3=5;
const int m1=10;
const int m2=11;
const int m3=12;

void setup()
{
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
}
void loop()
{
  int b1_state=digitalRead(b1);
  int b2_state=digitalRead(b2);
  int b3_state=digitalRead(b3);
  if(b1_state==LOW)
  {
    digitalWrite(m3,HIGH);
  }
  if(b2_state==LOW)
  {
    digitalWrite(m1,HIGH);
  }
  if((b1_state==LOW)&&(b2_state==LOW)&&(b3_state==LOW))
  {
    digitalWrite(m1,HIGH);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
    delay(1000);
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    delay(1000);
  }    
}
