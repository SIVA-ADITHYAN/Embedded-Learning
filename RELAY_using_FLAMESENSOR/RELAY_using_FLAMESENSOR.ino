const int flame=9;
const int relay=8;

void setup()
{
  pinMode(flame,INPUT);
  pinMode(relay,OUTPUT);
}
void loop()
{
  int flame_state=digitalRead(flame);

  if(flame_state==HIGHd)
  {
    digitalWrite(relay,HIGH);
  }
  else
  {
    digitalWrite(relay,LOW);
  }
}
