const int l=A3;

void setup() {
  pinMode(l,OUTPUT);
}

void loop() {
  digitalWrite(l,HIGH);
  delay(500);
  digitalWrite(l,LOW);
  delay(500);
}
