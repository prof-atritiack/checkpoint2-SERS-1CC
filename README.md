## Checkpoint 02 - Soluções em Energias Renováveis e Sustentáveis

**Curso:** 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA  
**Autor:** André Tritiack  
**Data:** 05/2025  

---

## EXERCÍCIO 1: MONITORAMENTO DE TENSÃO EM SÉRIE E PARALELO - SISTEMA DE EFICIÊNCIA SOLAR

**Situação-problema:**  
Uma empresa de energia solar deseja monitorar a eficiência de dois conjuntos de painéis solares: um conjunto com três painéis conectados em série e outro com três painéis conectados em paralelo. O objetivo é identificar qual configuração está gerando maior tensão e acionar LEDs indicadores para indicar a associação mais eficiente.  

**Circuito de referência no TinkerCAD** 

https://www.tinkercad.com/things/8Tl2elwnFSP-exemplo-exercicio-1-cp2?sharecode=CrTlfmVw8hsl4jWvjr_TnpW_9Ax6Chn_OExtOJPU3uA

**Instruções:**
1. Crie um código no Arduino que realize a leitura da tensão de cada associação.
2. Acenda o LED Verde caso a tensão em série seja maior que a em paralelo.
3. Acenda o LED Vermelho caso a tensão em paralelo seja maior que a em série.
4. Exiba as leituras no Monitor Serial a cada 3 segundos.

---

## EXERCÍCIO 2: SISTEMA DE DISTRIBUIÇÃO COM FONTES DC, RELÉS E LEDS - GERENCIAMENTO DE CARGA SOLAR

**Situação-problema:**  
Um sistema de gerenciamento de carga solar utiliza uma fonte DC ajustável e uma associação série de paineis solares para alimentar diferentes consumidores. O objetivo é monitorar a tensão de ambas as fontes e ativar relés para direcionar a energia, utilizando LEDs para indicar qual fonte está fornecendo mais energia.  

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

**Circuito de referência no TinkerCAD**  

https://www.tinkercad.com/things/5rEtXyw782l-exercicio-03-cp2-sers?sharecode=Fss_VIDfZxorUf_0ekcgNKKo5P-0hjcdZ8F5OXhsKLM

**Instruções:**
1. Realize a leitura da tensão no pino A0.
2. A lógica de controle dos LEDs será:
   - LED Verde aceso: Tensão menor que 24V.
   - LED Amarelo aceso: Tensão entre 24V e 27V.
   - LED Vermelho aceso: Tensão igual ou superior a 27V.
3. Exiba os valores de tensão e o estado do sistema no Monitor Serial a cada 2 segundos.

---

## EXERCÍCIO 4: MONITORAMENTO DE TENSÃO COM LCD I2C 16x2

**Situação-problema:**  
O sistema solar composto por seis painéis solares conectados em série deve ser monitorado para garantir a visualização em tempo real da tensão e do estado (`NORMAL`, `ALERTA`, `SOBRECARGA`). O objetivo é exibir esses valores em um display LCD 16x2, atualizando as informações a cada 2 segundos.

**Circuito de referência no TinkerCAD**

https://www.tinkercad.com/things/f3dkwoZx8Ne-exercicio-04-cp2-sers?sharecode=eoF1dQK1F1DNoEKuqdO2XMNgoquoG7DjkIHG26KZut4


**Instruções:**
1. Realize a leitura da tensão no pino A0.
2. Conecte o display LCD I2C 16x2 aos pinos SDA e SCL do Arduino.
3. Exiba a tensão lida e o estado do sistema no display LCD:
   - `NORMAL` para tensões menores que 24V.
   - `ALERTA` para tensões entre 24V e 27V.
   - `SOBRECARGA` para tensões iguais ou superiores a 27V.
4. Atualize os valores no display a cada 2 segundos.





