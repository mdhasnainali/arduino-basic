// Using LCD Display
// Sequence: 
//LiquidCrystal(rs, enable, d4, d5, d6, d7)
//LiquidCrystal(rs, rw, enable, d4, d5, d6, d7)
//LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7)
//LiquidCrystal(rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7)

#include <LiquidCrystal.h>
#define analogPin A0

int rs = 10;
int enable = 11;
int d4 = 4;
int d5 = 5;
int d6 = 6;
int d7 = 7;

float sensorValue;
float miliVolt;
float temperature;

LiquidCrystal lcd(rs, enable, d4, d5, d6, d7); 

void setup() {
  lcd.begin(16,2);
  pinMode(analogPin,INPUT);
}

void loop() {
  lcd.setCursor(0,0); // Set the Cursor
  sensorValue = analogRead(analogPin);
  miliVolt = (sensorValue * 5000)/1024;
  temperature = miliVolt/10;
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(char(223));
  lcd.print("C");
}
