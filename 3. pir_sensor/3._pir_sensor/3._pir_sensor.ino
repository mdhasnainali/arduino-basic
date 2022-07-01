// PIR Sensor Controll

int pir =4 ;
int led = 12;
int state;

void setup() {
  Serial.begin(9600);
  pinMode(pir,INPUT);
  pinMode(led, OUTPUT);
  
}

void loop() {
  state = digitalRead(pir);
  digitalWrite(led, state);

  Serial.print(state);
}
