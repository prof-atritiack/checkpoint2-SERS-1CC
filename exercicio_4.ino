
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Monitoramento em Display LCD I2C com LEDs Indicadores
 ********************************************************************/

#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

const int solarPin1 = A0;
const int solarPin2 = A1;
const int solarPin3 = A2;

// Pinos dos LEDs
const int ledVerde = 7;  // Sistema estável
const int ledVermelho = 8;  // Sobrecarga detectada

void setup() {
  lcd.begin(16, 2);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // TODO: Realizar as leituras dos painéis
  // float tensaoTotal = ...;

  // TODO: Implementar a lógica de exibição no LCD e controle dos LEDs

  delay(3000);
}
