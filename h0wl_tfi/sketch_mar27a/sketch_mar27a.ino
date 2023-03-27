#include <Servo.h>
Servo microservo;
#define LEDS_PIN 3

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LEDS_PIN, OUTPUT);  // for a 5v nano - both LEDs in series on pin 3
  microservo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly: 

  for (int i = 0; i < 6; i++) {  // 6 loops, each takes 2 seconds
    // Turn the LED on
    digitalWrite(LEDS_PIN, HIGH);
    if (i == 3) {
      microservo.write(270);
    }
    else if (i == 5) {
      microservo.write(0);    
    }
      
    // Wait for 1 second
    delay(1000);

    // Turn the LED off
    digitalWrite(LEDS_PIN, LOW);

    // Wait for 1 second
    delay(1000);  
  }
}