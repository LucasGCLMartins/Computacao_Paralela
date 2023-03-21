# Lab 01b - Introdução ao C
Considere o seguinte código na linguagem C para o cálculo do fatorial:

# include <stdio.h>

int main()
{
   int i, num, j;
   printf ("Enter the number: ");
   scanf ("%d", &num);
   j = num;

   for (i=1; j > 1; j = j -1) {
         i=i*j;
   }

   printf("The factorial of %d is %d\n",num,i);
}
Implemente a versão multiprocessada do cálculo do fatorial e compare o tempo de execução com a versão serial.


# Como executar o código
  - Para executar é necessario primeiro compilar o codigo, após isso somente será preciso rodar o executável 
