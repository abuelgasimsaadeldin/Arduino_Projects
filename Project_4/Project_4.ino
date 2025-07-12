int r = 9;
int g = 10;
int b = 11;

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(r, i);
    analogWrite(g, 255 - i);
    analogWrite(b, 0);
    delay(5);
  }

  for (int i = 0; i < 256; i++) {
    analogWrite(r, 0);
    analogWrite(g, i);
    analogWrite(b, 255 - i);
    delay(5);
  }

  for (int i = 0; i < 256; i++) {
    analogWrite(r, i);
    analogWrite(g, 0);
    analogWrite(b, 255 - i);
    delay(5);
  }
}

