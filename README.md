# DIO

## Desafio de Projeto

### Desenvolvimento de uma Calculadora em Linguagem C

Neste projeto o objetivo é desenvolver uma calculadora em linguagem C, seguindo todos os conceitos e técnicas apresentadas no módulo 3. A calculadora implementada deve ter no mínimo todas as operações aritméticas básicas: (adição, subtração, multiplicação e divisão). No entanto, você também pode evoluir suas habilidades e desenvolver uma calculadora no padrão “programador”, onde operações binárias, decimais, hexadecimais são realizadas.

Lembre-se que nosso objetivo está nas manipulações matemáticas e não na interface da calculadora, então a entrada e saída de dados pode ser feita por meio do terminal.

### Solução

Foi desenvolvida uma calculadora básica em C, com 5 operações básicas (adição, subtração, multiplicação, divisão, resto da divisão). Primeiro é realizada a coleta dos números e da operação e através de um <i>switch case</i> o resultado é calculado e exibido na tela.

#### Utilização
- As entradas devem ser feitas na ordem de uma calculadora normal (número -> operação -> número).
- Durante a entrada de números, caso o usuário digite mais coisas além do solicitado, o programa fará a conversão até o primeiro caractere não numérico, se for um texto completo, o número atribuído será 0.
- Para informar a operação, caso o usuário digite mais de um caractere, o programa considerará apenas o primeiro caractere digitado, descartando os demais, caso ele seja inválido, será exibida a mensagem de operação inválida.
