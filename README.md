## Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis

**Curso:** 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA  
**Autor:** André Tritiack  
**Data:** 05/2025  

---

## EXERCÍCIO 1: MONITORAMENTO DE TENSÃO EM SÉRIE E PARALELO - SISTEMA DE EFICIÊNCIA SOLAR

**Situação-problema:**  
Uma empresa de energia solar deseja monitorar a eficiência de dois conjuntos de painéis solares: um conjunto com três painéis conectados em série e outro com três painéis conectados em paralelo. O objetivo é identificar qual configuração está gerando maior tensão e acionar LEDs indicadores para indicar a associação mais eficiente.  

**Materiais Requeridos:**
- 06 Mini Painéis Solares (utilize a tensão de 5V)
- 01 Arduino UNO
- 03 Resistores de 1kΩ (divisor de tensão)
- 02 Resistores de 220Ω (LEDs)
- 01 LED Verde (indica que o conjunto Série é o mais eficiente)
- 01 LED Vermelho (indica que o conjunto Paralelo é o mais eficiente)
- 01 Protoboard (placa de circuito)

**Circuito de referência no TinkerCAD**  
https://www.tinkercad.com/things/8Tl2elwnFSP-exemplo-exercicio-1-cp2?sharecode=CrTlfmVw8hsl4jWvjr_TnpW_9Ax6Chn_OExtOJPU3uA

**Instruções:**
1. Monte três painéis solares em série e outros três em paralelo.
2. No conjunto Paralelo utilize um divisor de tensão com três resistores de 1K, conectando-o ao pino A0 do Arduino.
3. Conecte o conjunto Série ao pino A1 do Arduino.
4. Crie um código no Arduino que realize a leitura da tensão de cada associação.
5. Acenda o LED Verde caso a tensão em série seja maior que a em paralelo.
6. Acenda o LED Vermelho caso a tensão em paralelo seja maior que a em série.
7. Exiba as leituras no Monitor Serial a cada 3 segundos.

---

## EXERCÍCIO 2: SISTEMA DE DISTRIBUIÇÃO COM FONTES DC, RELÉS E LEDS - GERENCIAMENTO DE CARGA SOLAR

**Situação-problema:**  
Um sistema de gerenciamento de carga solar utiliza uma fonte DC ajustável e uma associação série de paineis solares para alimentar diferentes consumidores. O objetivo é monitorar a tensão de ambas as fontes e ativar relés para direcionar a energia, utilizando LEDs para indicar qual fonte está fornecendo mais energia.  

**Materiais Requeridos:**
- 01 Fonte DC Ajustável (0-30V)
- 02 Mini Paineis Solares (12V cada um)
- 01 Arduino UNO
- 02 Relés SPDT 5V
- 01 LED Amarelo (indica fonte 1 ativa)
- 01 LED Azul (indica fonte 2 ativa)
- 02 Resistores de 220Ω para os LEDs
- 04 Resistores para os divisores de tensão (2.1K e 7.9K)
- 01 Protoboard (placa de circuito)

**Circuito de referência no TinkerCAD**  
https://www.tinkercad.com/things/691KNreLDVZ-exercicio-02-cp2-sers?sharecode=WooQllFmv95WKWaD6GJKxbmQSFL4ScWhRM7PyyRtWLA

**Instruções:**
1. Configure a fonte DC com tensão diferente da tensão dos painéis solares.
2. Ajuste a tensão de cada fonte (A0 e A1) de forma a acionar o relé correspondente à fonte de maior tensão.
3. Exiba as leituras no Monitor Serial a cada 5 segundos.

---

## EXERCÍCIO 3: MONITORAMENTO DE CONDIÇÕES NORMAIS E SOBRECARGAS EM UM SISTEMA SOLAR COM LEDS INDICADORES

**Situação-problema:**  
Um sistema solar composto por seis painéis solares conectados em série está sendo monitorado para verificar possíveis condições de sobrecarga. O objetivo é implementar um sistema com três LEDs indicadores que sinalizam o estado do sistema: condições normais, alerta de sobrecarga e sobrecarga máxima. Os LEDs devem indicar visualmente a condição do sistema com base nos valores de tensão medidos.

**Materiais Requeridos:**
- 06 Mini Paineis Solares (5V cada, conectados em série para totalizar 30V)
- 01 Arduino UNO
- 03 LEDs (Verde, Amarelo e Vermelho)
- 03 Resistores de 220Ω (para LEDs)
- 01 Resistor de 10kΩ
- 01 Resistor de 2kΩ
- 01 Protoboard

**Instruções:**
1. Monte os seis painéis solares em série para totalizar 30V.
2. Construa um divisor de tensão com os resistores de 10kΩ e 2kΩ para reduzir a tensão para leitura no Arduino.
3. Realize a leitura da tensão no pino A0.
4. A lógica de controle dos LEDs será:
   - LED Verde aceso: Tensão menor que 24V.
   - LED Amarelo aceso: Tensão entre 24V e 27V.
   - LED Vermelho aceso: Tensão igual ou superior a 27V.
5. Exiba os valores de tensão e o estado do sistema no Monitor Serial a cada 2 segundos.

---

## EXERCÍCIO 4: MONITORAMENTO DE TENSÃO COM LCD I2C 16x2

**Situação-problema:**  
O sistema solar composto por seis painéis solares conectados em série deve ser monitorado para garantir a visualização em tempo real da tensão e do estado (`NORMAL`, `ALERTA`, `SOBRECARGA`). O objetivo é exibir esses valores em um display LCD 16x2, atualizando as informações a cada 2 segundos.

**Materiais Requeridos:**
- 06 Mini Paineis Solares (5V cada, conectados em série para totalizar 30V)
- 01 Arduino UNO
- 01 Display LCD I2C 16x2
- 01 Resistor de 10kΩ
- 01 Resistor de 2kΩ
- 01 Protoboard

**Instruções:**
1. Monte os seis painéis solares em série para totalizar 30V.
2. Utilize um divisor de tensão composto por resistores de 10kΩ e 2kΩ para reduzir a tensão para leitura no Arduino.
3. Realize a leitura da tensão no pino A0.
4. Conecte o display LCD I2C 16x2 aos pinos SDA e SCL do Arduino.
6. Exiba a tensão lida e o estado do sistema no display LCD:
   - `NORMAL` para tensões menores que 24V.
   - `ALERTA` para tensões entre 24V e 27V.
   - `SOBRECARGA` para tensões iguais ou superiores a 27V.
7. Atualize os valores no display a cada 2 segundos.
