int ledV = 2;
int ledA = 3;
int ledR = 4;

void setup() {

  pinMode(ledV, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledR, OUTPUT);

}

void loop() {

  digitalWrite(ledV, HIGH);
  delay(5000);
  digitalWrite(ledV, LOW);
  delay(500);
  digitalWrite(ledV, HIGH);
  delay(500);
  digitalWrite(ledV, LOW);
  delay(500);
  digitalWrite(ledV, HIGH);
  delay(500);
  digitalWrite(ledV, LOW);
  delay(500);
  digitalWrite(ledV, HIGH);
  delay(500);
  digitalWrite(ledV, LOW);
  delay(500);
  digitalWrite(ledA, HIGH);
  delay(1500);
  digitalWrite(ledA, LOW);
  digitalWrite(ledR, HIGH);
  delay(3000);
  digitalWrite(ledR, LOW);

}
