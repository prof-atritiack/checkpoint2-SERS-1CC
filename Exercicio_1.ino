
/********************************************************************
 * Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Monitoramento de Tensão em Série e Paralelo
 ********************************************************************/

#define LED_SERIE 7
#define LED_PARALELO 8
#define PINO_SERIE A0
#define PINO_PARALELO A1

void setup() {
  Serial.begin(9600);
  pinMode(LED_SERIE, OUTPUT);
  pinMode(LED_PARALELO, OUTPUT);
}

void loop() {
  int tensaoSerie = analogRead(PINO_SERIE);
  int tensaoParalelo = analogRead(PINO_PARALELO);

  Serial.print("Tensão Série: ");
  Serial.println(tensaoSerie);
  Serial.print("Tensão Paralelo: ");
  Serial.println(tensaoParalelo);

  delay(3000);
}
