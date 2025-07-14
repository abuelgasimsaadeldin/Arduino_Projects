int leds[] = {2, 3, 4};
int button = 5;
int selected;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(button, INPUT);
}

void loop() {
  selected = random(3);
  digitalWrite(leds[selected], HIGH);
  delay(500);
  digitalWrite(leds[selected], LOW);

  unsigned long t = millis();
  while (digitalRead(button) == LOW) {
    if (millis() - t > 1500) return;
  }

  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], HIGH);
  }
  delay(100);
  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}

