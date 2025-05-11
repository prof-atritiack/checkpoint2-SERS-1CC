
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Sistema Solar com Dissipação de Energia e LEDs Indicadores
 ********************************************************************/

const int solarPin1 = A0;
const int solarPin2 = A1;
const int solarPin3 = A2;

// Pinos dos LEDs
const int ledVerde = 7;  // Sistema estável
const int ledVermelho = 8;  // Sobrecarga detectada

// Pino do resistor de dissipação
const int resistorPin = 9;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(resistorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // TODO: Realizar as leituras dos painéis
  // float tensaoTotal = ...;

  // TODO: Implementar a lógica de controle dos LEDs e do resistor

  delay(2000);
}
