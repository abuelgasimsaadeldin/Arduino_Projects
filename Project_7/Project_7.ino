int button = 2;
int led = 3;
bool state = false;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(button) == LOW) {
    delay(20);
    if (digitalRead(button) == LOW) {
      state = !state;
      digitalWrite(led, state);
      while (digitalRead(button) == LOW);
    }
  }
}

