// PWM (pulse-width modulated) - Analog Output provides from arduino 
// Range for PWM - 0 to 255
// Default frequency: 500 Hz
// Pins for PWM: 3,5,6,9,10,11

//Syntax:
//analogWrite(pin, value);
//analogWrite(pin, value, frequency);

int led = 10;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i=0;i<255;i++){
    analogWrite(led,i);
    delay(20);
  }

for(int i=255;i>=0;i--){
    analogWrite(led,i);
    delay(20);
  }
}
