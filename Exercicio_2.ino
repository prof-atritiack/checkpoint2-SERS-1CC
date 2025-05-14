
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Sistema de Distribuição com Relés e LEDs
 ********************************************************************/

#define RELE1 7
#define RELE2 8
#define PINO_FONTE1 A0
#define PINO_FONTE2 A1

void setup() {
  Serial.begin(9600);
  pinMode(RELE1, OUTPUT);
  pinMode(RELE2, OUTPUT);
}

void loop() {
  int tensaoFonte1 = analogRead(PINO_FONTE1);
  int tensaoFonte2 = analogRead(PINO_FONTE2);

  Serial.print("Tensão Fonte 1: ");
  Serial.println(tensaoFonte1);
  Serial.print("Tensão Fonte 2: ");
  Serial.println(tensaoFonte2);

  delay(5000);
}
