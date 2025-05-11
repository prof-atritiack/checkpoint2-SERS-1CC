
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Monitoramento de Tensão em Série e Paralelo com LEDs Indicadores
 ********************************************************************/

// Pinos de entrada analógica
const int seriePin = A0;
const int paraleloPin = A1;

// Pinos dos LEDs
const int ledVerde = 7;  // Indica série mais eficiente
const int ledVermelho = 8;  // Indica paralelo mais eficiente

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // TODO: Realizar as leituras das tensões
  // float tensaoSerie = ...;
  // float tensaoParalelo = ...;

  // TODO: Comparar as tensões e acionar os LEDs

  // Exibir leituras no Monitor Serial
  // Serial.print("Série: "); Serial.println(tensaoSerie);
  // Serial.print("Paralelo: "); Serial.println(tensaoParalelo);

  delay(3000);
}
