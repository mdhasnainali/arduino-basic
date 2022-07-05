// Serial Monitor Using
// If we send 1 then led will be HIGH
// If we send 0 then led will be low

int sms;
int led = 12;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available() != 0){
    sms = Serial.read();    // Reads data sended from the serial monitor

    if(sms == '1'){
      digitalWrite(led, HIGH);
    }
    else if(sms == '0'){
      digitalWrite(led, LOW);
    }
  }
  

}
