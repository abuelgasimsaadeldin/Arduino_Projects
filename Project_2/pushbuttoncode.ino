/******************** 
Project 1 - Blinking LED 

* Please refer to the CircuitDiagram.md file first before proceeding

Components Required:
1) Arduino UNO
2) LED
3) 220 ohm resistor
4) Breadboard
5) Push button

********************/

int BUTTON_PIN = 7;    // initialize Push Button pin as pin 7
int LED_PIN =  3;      // initialize LED pin as pin 3

int buttonState = 0;   // variable for reading the pushbutton status

void setup() {
  pinMode(LED_PIN, OUTPUT);               // initialize the LED pin as an output:
  pinMode(BUTTON_PIN, INPUT_PULLUP);      // initialize the pushbutton pin as an pull-up input:
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);     // read the state of the pushbutton value:

  if(buttonState == LOW)                     // If button is pressing
    digitalWrite(LED_PIN, HIGH);             // turn on LED
  else                                       // otherwise, button is not pressing
    digitalWrite(LED_PIN, LOW);              // turn off LED
}
