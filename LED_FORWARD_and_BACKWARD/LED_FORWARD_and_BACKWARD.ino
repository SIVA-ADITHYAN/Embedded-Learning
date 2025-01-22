//define the connected pins

const int l1=2;
const int l2=3;
const int l3=4;
const int l4=5;
const int l5=6;
const int l6=7;
const int l7=8;
const int l8=9;

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
}

void loop() 
{
  digitalWrite(l1,HIGH);
  delay(1000);
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  delay(1000);
  digitalWrite(l2,LOW);
  digitalWrite(l3,HIGH);
  delay(1000);
  digitalWrite(l3,LOW);
  digitalWrite(l4,HIGH);
  delay(1000);
  digitalWrite(l4,LOW);
  digitalWrite(l5,HIGH);
  delay(1000);
  digitalWrite(l5,LOW);
  digitalWrite(l6,HIGH);
  delay(1000);
  digitalWrite(l6,LOW);
  digitalWrite(l7,HIGH);
  delay(1000);
  digitalWrite(l7,LOW);
  digitalWrite(l8,HIGH);
  delay(1000);
  digitalWrite(l8,LOW);
  digitalWrite(l7,HIGH);
  delay(1000);
  digitalWrite(l7,LOW);
  digitalWrite(l6,HIGH);
  delay(1000);
  digitalWrite(l6,LOW);
  digitalWrite(l5,HIGH);
  delay(1000);
  digitalWrite(l5,LOW);
  digitalWrite(l4,HIGH);
  delay(1000);
  digitalWrite(l4,LOW);
  digitalWrite(l3,HIGH);
  delay(1000);
  digitalWrite(l3,LOW);
  digitalWrite(l2,HIGH);
  delay(1000);
  digitalWrite(l2,LOW);
}
