// Read Digital Input Signal and On-Off led using button

int led = 12;
int input = 4;
int buttonState;

void setup() {
  Serial.begin(9600);   // sets serial monitor for preview any value
  pinMode (led, OUTPUT);  // sets output pin
  pinMode (input, INPUT);  // sets input pin
}

void loop() {
  buttonState = digitalRead(input);  // read the input
  digitalWrite(led,buttonState);   // configure led for 

  Serial.print(buttonState);
}
