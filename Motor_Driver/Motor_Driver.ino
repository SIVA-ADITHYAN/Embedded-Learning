const int m1=8;
const int m2=9;
const int flame=10;

void setup()
{
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(flame,INPUT);
}

void loop()
{
  int flame_state=digitalRead(flame);
  if(flame_state==HIGH)
  {
    digitalWrite(m2,LOW);
    digitalWrite(m1,HIGH);
  }
  else
  {
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
  }
}
