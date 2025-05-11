
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Sistema de Distribuição com Fontes DC, Relés e LEDs Indicadores
 ********************************************************************/

const int fonte1Pin = A0;
const int fonte2Pin = A1;

// Pinos dos LEDs
const int ledAmarelo = 7;  // Fonte 1 ativa
const int ledAzul = 8;     // Fonte 2 ativa

// Pinos dos relés
const int rele1 = 9;
const int rele2 = 10;

void setup() {
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // TODO: Realizar as leituras das fontes
  // float tensao1 = ...;
  // float tensao2 = ...;

  // TODO: Comparar as tensões e acionar os relés e LEDs

  delay(5000);
}
