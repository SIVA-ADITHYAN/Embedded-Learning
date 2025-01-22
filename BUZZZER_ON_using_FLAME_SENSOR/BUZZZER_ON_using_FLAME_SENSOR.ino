const int flame=8;
const int buzz=9;

void setup()
{
  pinMode(flame,INPUT);
  pinMode(buzz,OUTPUT);
}
void loop()
{
  int flame_sensor=digitalRead(flame);
  if(flame_sensor==HIGH)
  {
    digitalWrite(buzz,HIGH);
  }
  else
  {
    digitalWrite(buzz,LOW);
  }
}
