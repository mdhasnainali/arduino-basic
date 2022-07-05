// Using LCD Display
// Sequence: 
//LiquidCrystal(rs, enable, d4, d5, d6, d7)
//LiquidCrystal(rs, rw, enable, d4, d5, d6, d7)
//LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7)
//LiquidCrystal(rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7)

#include <LiquidCrystal.h>

int rs = 10;
int enable = 11;
int d4 = 4;
int d5 = 5;
int d6 = 6;
int d7 = 7;

LiquidCrystal lcd(rs, enable, d4, d5, d6, d7); 

void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(0,0); // Set the Cursor
  lcd.print("Farbi is my Love");
  delay(1000);
  lcd.clear();
  delay(1000);

}
