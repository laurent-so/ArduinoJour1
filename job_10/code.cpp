int ledPin = 9;
int brightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);
  brightness += 5;
  if (brightness > 255) { 
    brightness = 0; 
  }
  delay(50);
}