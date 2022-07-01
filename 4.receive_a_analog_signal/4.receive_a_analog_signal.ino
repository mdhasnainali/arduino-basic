// Recieves a analog sognal
int pinNo = A3;
int value;
float volt;

void setup() {
Serial.begin(9600);
pinMode(pinNo,INPUT);
}

void loop() {
  value = analogRead(A3);   // Usually the range is 0 to 1024
  volt = value * 0.0049;
  Serial.println(volt);

}
