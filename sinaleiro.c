int ledDelay = 10000;
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);  
}

void loop() {
  digitalWrite(redPin, HIGH);
   delay(1000);

  digitalWrite(yellowPin, HIGH);
  delay(500);

  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  delay(500);

  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin,LOW);
  delay(200);

  digitalWrite(yellowPin, LOW);
  
}