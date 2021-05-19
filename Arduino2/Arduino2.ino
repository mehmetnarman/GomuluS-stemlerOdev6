#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
const int intGas=2;
const int intTemp=3;
void setup()
{
  lcd.begin(16,2);
  pinMode(intGas, INPUT);
  pinMode(intTemp, INPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(intGas), intGasMet, RISING);
  attachInterrupt(digitalPinToInterrupt(intTemp), intTempMet, RISING);
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Alarm Yok");
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(500);
}

void intGasMet(){
  lcd.setCursor(0,0);
  lcd.print("Gaz Alarmi");
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
}

void intTempMet(){
  lcd.setCursor(0,0);
  lcd.print("Sicaklik Alarmi");
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
}
