// Ultrasonic Sensor
// Ultrasound Frequency: 40000 Hz
// trig generates the ultrasound
// Echo receives the ultrasound
// 10 Micro seconds = 8 cycle ultrasound wave

int trigPin = 9;
int echoPin = 10;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);  
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear previous state
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  // Sets tringPin for 10 micro seconds
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance = ((duration*34000)/1000000)/2;  // Speeds of sound is 340 m/s

  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}
