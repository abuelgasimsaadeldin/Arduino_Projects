/******************** 
Project 1 - Blinking LED 

* Please refer to the CircuitDiagram.md file first before proceeding

Components Required:
1) Arduino UNO
2) LED
3) 220 ohm resistor
4) Breadboard

********************/

int LED = 13;                // initialize LED pin as pin 13.

void setup() {
  pinMode(LED, OUTPUT);      // initialize LED pin as an output.
}

void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
