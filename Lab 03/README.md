# Lab 03 - Memoria
Crie um código-fonte que utilize fork() e shmget() entre 2 processos (pai e filho). Seu código deve garantir que:<br>

o processo pai e o processo filho compartilhem uma variável simples (por exemplo, inteiro - valor 1)<br>

o processo pai imprime o valor inicial dessa variável; em seguida, cria o processo filho e espera-o<br>

o processo filho acessa esta variável, realiza uma operação (por exemplo, adição - valor 2, totalizando 3), modificando o valor; em seguida, o processo filho termina<br>

o processo pai realiza uma outra operação (por exemplo, multiplicação - valor 4, totalizando 12), modificando novamente o valor, e imprime novamente a variável<br>

Essa lógica de execução deve ser garantida no seu código-fonte em C. <br>


# Como executar o código
  - Para executar é necessario primeiro compilar o codigo, após isso somente será preciso rodar o executável 
