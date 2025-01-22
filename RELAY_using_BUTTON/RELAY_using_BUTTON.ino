const int relay=13;
const int s=10;

void setup()
{
  pinMode(relay,OUTPUT);
  pinMode(s,INPUT);
}
void loop()
{
  int s_state=digitalRead(s);
  if(s_state==HIGH)
  {
    digitalWrite(relay,LOW);
  }
  else
  {
    digitalWrite(relay,HIGH);
  }
}
