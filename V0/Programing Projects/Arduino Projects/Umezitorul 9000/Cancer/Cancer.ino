#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int plantaval;
int plantval;
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  plantaval = analogRead(A0);
  Serial.print(plantaval);
  plantval = map(plantaval,0,816,0,100);
  lcd.print("Umiditate:");
  lcd.setCursor(0,1);
  lcd.print(plantval);
  lcd.print("%");
  if (plantval <= 33) {
    digitalWrite(7,LOW);
    delay(50);
    digitalWrite(7,HIGH);
  }
  delay(150);
  lcd.clear();
}
