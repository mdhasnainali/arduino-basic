// Blink a LED 

int led = 13;


void setup() {
  pinMode(led,OUTPUT);  // sets the led pin as output
}

void loop() {
  digitalWrite(led, HIGH);  // turns the led on
  delay(3000);     // waits for a second
  digitalWrite(led, LOW);  // turns the led off
  delay(1000);    // waits for a second
}
