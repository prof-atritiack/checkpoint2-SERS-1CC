
/********************************************************************
 * Exemplo de Leitura Analógica no Arduino
 * Curso: 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
 * Autor: André Tritiack
 * Data: 05/2025
 * Descrição: Exemplo simples de leitura analógica usando o pino A0, 
 * conversão da leitura para tensão em volts e acionamento de um LED 
 * caso a tensão ultrapasse um limite predefinido.
 ********************************************************************/

const int analogPin = A0;  // Pino analógico A0
const int ledPin = 7;      // LED indicador
int leitura = 0;           // Variável para armazenar a leitura
float tensao = 0.0;        // Tensão convertida

// Limite de tensão para acionamento do LED
const float limiteTensao = 2.5;  

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);     
}

void loop() {
  leitura = analogRead(analogPin);                // Realiza a leitura analógica
  tensao = leitura * (5.0 / 1023.0);              // Converte para tensão em volts

  // Exibe os valores no Monitor Serial
  Serial.print("Leitura Analógica: ");
  Serial.print(leitura);
  Serial.print(" | Tensão (V): ");
  Serial.println(tensao);

  // Verifica o limite de tensão e aciona o LED
  if (tensao > limiteTensao) {
    digitalWrite(ledPin, HIGH);  // Acende o LED
  } else {
    digitalWrite(ledPin, LOW);   // Apaga o LED
  }

  delay(1000);  // Aguarda 1 segundo antes da próxima leitura
}
