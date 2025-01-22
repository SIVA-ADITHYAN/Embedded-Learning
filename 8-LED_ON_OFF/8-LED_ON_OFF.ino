//define the connected pins

const int l1=2;
const int l2=3;
const int l3=4;
const int l4=5;
const int l5=6;
const int l6=7;
const int l7=8;
const int l8=9;
const int led_on=A0;

//define the i/o of the connected pins
void setup() 
{
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l5,OUTPUT);
  pinMode(l6,OUTPUT);
  pinMode(l7,OUTPUT);
  pinMode(l8,OUTPUT);
  pinMode(led_on,OUTPUT);
}

void loop() 
{
  digitalWrite(led_on,LOW);
  digitalWrite(l1,HIGH);
  digitalWrite(l2,HIGH);
  delay(1000);
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,HIGH);
  delay(1000);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,HIGH);
  digitalWrite(l6,HIGH);
  delay(1000);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,HIGH);
  digitalWrite(l8,HIGH);
  delay(1000);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  digitalWrite(led_on,HIGH);
  delay(500);
}
