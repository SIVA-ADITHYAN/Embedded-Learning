const int led=9;
const int motor=8;
const int b1=3;
const int b2=4;

void setup()
{
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(motor,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  int b1_state=digitalRead(b1);
  int b2_state=digitalRead(b2);

  if(b1_state==HIGH)
  {
    digitalWrite(motor,HIGH);
  }

  if(b2_state==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
