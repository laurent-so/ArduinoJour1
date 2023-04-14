int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int numPins = sizeof(ledPins) / sizeof(int);
int delayTime = 500;

void setup() {
  for (int i = 0; i < numPins; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numPins; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}