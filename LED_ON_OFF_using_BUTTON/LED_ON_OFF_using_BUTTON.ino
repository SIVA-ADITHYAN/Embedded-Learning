const int button=7;
const int l1=6;

void setup()
{
  pinMode(button,INPUT);
  pinMode(l1,OUTPUT);
}
void loop()
{
  int  BUTTONstate=digitalRead(button);
  if(BUTTONstate==HIGH)
  {
    digitalWrite(l1,HIGH);
  }
  else 
  {
    digitalWrite(l1,LOW);
  }
}
