#include <Servo.h>

Servo servoMain; // Define our Servo

int trigpin = 10;
int echopin = 11;
int distance;
float duration;
float cm;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  servoMain.attach(9); // Attach the servo on digital pin 9
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delay(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);
  cm = duration / 58.82;
  distance = cm;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 12) {
    servoMain.write(180);  // Turn Servo to 180 degrees
    delay(3000);
  } else {
    servoMain.write(0);    // Turn Servo back to 0 degrees
    delay(50);
  }
}
