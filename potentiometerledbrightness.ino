int potPin = A0;
int ledPin = 9;
int potValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  analogWrite(ledPin, potValue / 4);
}
