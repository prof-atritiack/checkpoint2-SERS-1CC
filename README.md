
# CHECKPOINT 02 - SOLUÇÕES EM ENERGIAS RENOVÁVEIS E SUSTENTÁVEIS
**Turmas:** 1CCPF, 1CCPG, 1CCPO, 1CCR, 1CCA
**Professor:** André Tritiack

## ORIENTAÇÕES GERAIS:
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
- 6 Mini Painéis Solares (5V cada)
- Arduino UNO
- 6 Resistores de 1kΩ
- LED Verde (Indica série mais eficiente)
- LED Vermelho (Indica paralelo mais eficiente)
- 2 Resistores de 220Ω
- Protoboard
- Fios de conexão

**Instruções:**
1. Monte três painéis solares em série e outros três em paralelo.
2. Crie um divisor de tensão para cada associação, conectando-os aos pinos A0 e A1.
3. Realize a leitura da tensão de cada associação.
4. Acenda o LED Verde caso a tensão em série seja maior que a em paralelo.
5. Acenda o LED Vermelho caso a tensão em paralelo seja maior que a em série.
6. Exiba as leituras no Monitor Serial a cada 3 segundos.

---

## EXERCÍCIO 2: SISTEMA DE DISTRIBUIÇÃO COM FONTES DC, RELÉS E LEDS - GERENCIAMENTO DE CARGA SOLAR

**Situação-problema:**  
Um sistema de gerenciamento de carga solar utiliza duas fontes DC ajustáveis para alimentar diferentes consumidores. O objetivo é monitorar a tensão de ambas as fontes e ativar relés para direcionar a energia, utilizando LEDs para indicar qual fonte está fornecendo mais energia.  

**Materiais Requeridos:**
- 2 Fontes DC Ajustáveis (0-12V)
- Arduino UNO
- 2 Relés
- LED Amarelo (Indica fonte 1 ativa)
- LED Azul (Indica fonte 2 ativa)
- 2 Resistores de 220Ω
- Protoboard
- Fios de conexão

**Instruções:**
1. Configure as duas fontes DC com tensões distintas.
2. Conecte os LEDs Amarelo e Azul aos relés.
3. Verifique a tensão de cada fonte (A0 e A1) e acione o relé correspondente à fonte de maior tensão.
4. Exiba as leituras no Monitor Serial a cada 5 segundos.

---

## EXERCÍCIO 3: SISTEMA SOLAR COM DISSIPAÇÃO DE ENERGIA E LEDS - PROTEÇÃO CONTRA SOBRECARGA

**Situação-problema:**  
Uma instalação solar utiliza três painéis solares em série para alimentar um sistema crítico. Quando a tensão ultrapassa um limite seguro, um resistor de dissipação deve ser ativado. LEDs indicam o estado do sistema.  

**Materiais Requeridos:**
- 3 Mini Painéis Solares (5V cada)
- 1 Fonte DC Ajustável
- Arduino UNO
- Resistor de 10Ω
- LED Verde (Sistema estável)
- LED Vermelho (Sobrecarga detectada)
- 2 Resistores de 220Ω
- Protoboard
- Fios de conexão

**Instruções:**
1. Conecte os três painéis em série e monitore a tensão total.
2. Ative o resistor de dissipação caso a tensão ultrapasse 12V.
3. Acenda o LED Verde se a tensão estiver abaixo de 10V.
4. Acenda o LED Vermelho se a tensão ultrapassar 12V.
5. Exiba as leituras no Monitor Serial a cada 2 segundos.

---

## EXERCÍCIO 4: MONITORAMENTO EM DISPLAY LCD I2C COM LEDS DE ALERTA - INTERFACE DE MONITORAMENTO SOLAR

**Situação-problema:**  
Um sistema de monitoramento solar utiliza três painéis solares em série para alimentar um conjunto de dispositivos. O display LCD I2C exibe a tensão total e os LEDs indicam estados críticos de carga.  

**Materiais Requeridos:**
- 3 Mini Painéis Solares (5V cada)
- 2 Fontes DC Ajustáveis
- Arduino UNO
- Display LCD I2C (16x2)
- LED Verde (Sistema estável - 10V a 12V)
- LED Vermelho (Sobrecarga - Acima de 12V)
- 2 Resistores de 220Ω
- Protoboard
- Fios de conexão

**Instruções:**
1. Monte os três painéis em série e conecte-os ao Arduino.
2. Utilize a biblioteca Adafruit LiquidCrystal para gerenciar o display I2C.
3. Exiba a leitura da tensão total dos painéis na linha superior do LCD.
4. Acenda o LED Verde se a tensão estiver entre 10V e 12V.
5. Acenda o LED Vermelho se a tensão ultrapassar 12V.
6. Atualize a leitura a cada 3 segundos.
