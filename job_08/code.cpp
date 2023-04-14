int led1 = 2;
int led2 = 3;
int delayTime1 = 1000;
int delayTime2 = 500;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(delayTime1);
  digitalWrite(led1, LOW);
  delay(delayTime1);

  digitalWrite(led2, HIGH);
  delay(delayTime2);
  digitalWrite(led2, LOW);
  delay(delayTime2);
}