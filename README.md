# monitoramento-temperatura# Monitoramento de Temperatura

Projeto desenvolvido para a disciplina de Algoritmo e Pensamento Computacional.

## Informações

- Aluna: Érika Stephanny Cabral Dos Santos
- Disciplina: Algoritmo e Pensamento Computacional
- Professora: Profa. Karla Sartin
- Linguagem: C

## Objetivo

O projeto consiste em desenvolver um programa para monitoramento de temperatura utilizando estruturas de repetição.

O usuário informa um limite de temperatura maior que zero. Depois disso, o programa solicita continuamente novas temperaturas.

Quando uma temperatura ultrapassa o limite, o programa apresenta um alerta e conta quantas temperaturas acima do limite foram registradas.

Caso sejam registradas 3 temperaturas consecutivas acima do limite, o monitoramento é encerrado automaticamente.

O usuário também pode encerrar o monitoramento manualmente digitando 000.

## Estruturas utilizadas

- do-while
- while
- if/else
- scanf
- printf
- break
- continue
- Variáveis float e int
- Validação de entradas

## Funcionamento

### Limite de temperatura

O programa solicita um limite de temperatura maior que zero.

Caso o usuário digite um número negativo, zero ou uma entrada que não seja numérica, o programa informa o erro e solicita novamente.

### Monitoramento

Depois que o limite é definido, o programa solicita continuamente novas temperaturas.

Quando a temperatura é maior que o limite, o programa mostra um alerta e aumenta o contador de temperaturas acima do limite.

### Temperaturas consecutivas

O programa possui um contador de temperaturas consecutivas acima do limite.

A contagem funciona da seguinte maneira:

1/3  
2/3  
3/3

Quando uma temperatura menor ou igual ao limite é registrada, a sequência é zerada.

### Encerramento automático

Quando são registradas 3 temperaturas consecutivas acima do limite, o programa realiza o desligamento automático.

### Encerramento manual

O usuário pode encerrar o monitoramento digitando:

000

## Testes

### Teste 1 - Entrada inválida

Limite:

abc

Resultado:

Entrada invalida! Digite um valor numerico.

O programa rejeita a entrada e solicita novamente um valor válido.

### Teste 2 - Temperaturas acima do limite, mas não consecutivas

Limite:

80

Entradas:

70, 89, 68, 90, 45, 100, 000

Resultado:

O programa registra temperaturas acima do limite, porém elas não são consecutivas. O contador é zerado sempre que uma temperatura menor ou igual a 80 °C é registrada.

### Teste 3 - Três temperaturas consecutivas acima do limite

Limite:

80

Entradas:

45, 87, 90, 120

Resultado:

O programa identifica três temperaturas consecutivas acima de 80 °C e encerra automaticamente o monitoramento.

### Teste 4 - Reinício da sequência

Limite:

80

Entradas:

90, 95, 70, 100, 105, 000

Resultado:

As temperaturas 90 °C e 95 °C iniciam uma sequência de 2 temperaturas acima do limite.

A temperatura 70 °C reinicia a sequência.

Depois, 100 °C e 105 °C iniciam uma nova sequência.

O programa é encerrado manualmente com 000.

## Como executar

O código pode ser executado em um compilador C, como GCC, Code::Blocks, Dev-C++, Visual Studio Code ou OnlineGDB.

## Estrutura do projeto

monitoramento-temperatura/

├── README.md  
└── main.c

## Autora

Érika Stephanny Cabral Dos Santos