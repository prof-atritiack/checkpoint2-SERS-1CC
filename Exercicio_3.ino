
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Monitoramento de Sobrecarga com LEDs
 ********************************************************************/

#define LED_VERDE 8
#define LED_AMARELO 9
#define LED_VERMELHO 10
#define PINO_TENSAO A0

void setup() {
  Serial.begin(9600);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
}

void loop() {
  int tensao = analogRead(PINO_TENSAO);

  Serial.print("Tensão Lida: ");
  Serial.println(tensao);

  delay(2000);
}
