
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Monitoramento com LCD I2C
 ********************************************************************/

#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);
#define PINO_TENSAO A0

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
}

void loop() {
  int tensao = analogRead(PINO_TENSAO);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Tensao: ");
  lcd.setCursor(8, 0);
  lcd.print(tensao);

  lcd.setCursor(0, 1);
  lcd.print("Status: ");

  delay(2000);
}
