#include <Servo.h>
Servo microservo;
#define LED1_PIN 3
#define LED2_PIN 4

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  microservo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly: 

  // Turn the LED on
  digitalWrite(LED1_PIN, HIGH);
  digitalWrite(LED2_PIN, HIGH);
  microservo.write(0);
  
  // Wait for 1.5 seconds
  delay(1500);

  // Turn the LED off
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  microservo.write(180);

  // Wait for 1.5 seconds
  delay(1500);  
}
