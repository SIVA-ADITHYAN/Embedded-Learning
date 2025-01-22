const int b1=8;
const int b2=10;
const int l=9;
const int buz=11;

void setup()
{
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(buz,OUTPUT);
  pinMode(l,OUTPUT);
}

void loop()
{
  int b1_state=digitalRead(b1);
  int b2_state=digitalRead(b2);

  if(b1_state==HIGH)
  {
    digitalWrite(l,HIGH);
    digitalWrite(buz,LOW);
  }
  
  else if(b2_state==HIGH)
  {
    digitalWrite(buz,HIGH);
    digitalWrite(l,LOW);
  }
  if((b1_state==HIGH)&&(b2_state==HIGH))
  {
    digitalWrite(buz,HIGH);
    digitalWrite(l,HIGH);
  }
  
}
