
# CHECKPOINT 02 - SOLUÇÕES EM ENERGIAS RENOVÁVEIS E SUSTENTÁVEIS

**Turmas:** 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA

**Professor:** André Tritiack

## ORIENTAÇÕES GERAIS:
## (OS EXERCÍCIOS 03 E 04 SERÃO REVISADOS E ATUALIZADOS ATÉ 14/05) ##

- Os desafios devem ser desenvolvidos no **TinkerCAD**.
- Utilize os códigos-base para Arduino que estão disponíveis neste repositório.
- A atividade pode ser realizada em grupos, utilizando os mesmos grupos do Challenge.
- Após a conclusão dos circuitos, um integrante do grupo deve gerar os **quatro links compartilháveis** do TinkerCAD e submetê-los na plataforma junto com um arquivo **.txt** contendo o nome completo de todos os integrantes.
- **Apenas um aluno por grupo deve enviar os links e o arquivo .txt.**
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

## EXERCÍCIO 3: EM REVISÃO (ATUALIZAÇÃO SERÁ FEITA ATÉ 14/05)
---

## EXERCÍCIO 4: EM REVISÃO (ATUALIZAÇÃO SERÁ FEITA ATÉ 14/05)
---

