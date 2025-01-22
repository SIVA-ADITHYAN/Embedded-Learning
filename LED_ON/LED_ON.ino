const int l1=5;
void setup()
{
  pinMode(l1,OUTPUT); 
}
void loop()
{
  
  digitalWrite(l1,LOW);
  delay(1000); //to delay the output or next command by 1s
  digitalWrite(l1,HIGH); //on led
  delay(1000); //to delay the output or next command by 1s
  

}
