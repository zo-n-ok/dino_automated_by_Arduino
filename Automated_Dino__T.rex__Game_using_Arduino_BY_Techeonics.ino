#include <Servo.h>

Servo servo;
const int LDR_PIN = A0; // LDR connected to A0
const int THRESHOLD = 35; // Adjust this based on your environment

void setup() {
  Serial.begin(9600);
  servo.attach(9); // Servo connected to pin 9
  servo.write(90); // Set servo to neutral position
}

void loop() {
  int lightValue = analogRead(LDR_PIN);
  Serial.println(lightValue); // Monitor LDR values

  if (lightValue < THRESHOLD) { // If an obstacle is detected
    servo.write(60); // Press the key (simulate jump)
    delay(150);
    servo.write(90); // Release key
  }

  delay(50); // Short delay for stability
}

