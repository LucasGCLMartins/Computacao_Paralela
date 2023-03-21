# Lab 01b - Introdução ao C
Considere o seguinte código na linguagem C para o cálculo do fatorial:

# include <stdio.h><br>

int main()<br>
{<br>
   int i, num, j;<br>
   printf ("Enter the number: ");<br>
   scanf ("%d", &num);<br>
   j = num;<br>

   for (i=1; j > 1; j = j -1) {<br>
         i=i*j;<br>
   }<br>

   printf("The factorial of %d is %d\n",num,i);<br>
}<br>
Implemente a versão multiprocessada do cálculo do fatorial e compare o tempo de execução com a versão serial.<br>

# Como executar o código
  - Para executar é necessario primeiro compilar o codigo, após isso somente será preciso rodar o executável 
