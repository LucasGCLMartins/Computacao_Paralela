#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
 int pip[2];
 int n,f=1,i,n1;
 pipe(pip);
 if(!fork())
 {
  printf("Processo Filho - Escrevendo no Pipe \n");
  printf("Processo Filho - Escreva o número: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   f=f*i;
  write(pip[1],(char *)&f,sizeof(f));
  close(pip[1]);
  printf("Processo Filho - Saindo\n");
 }
 else
 {
  wait(0);
  printf("\nProcesso Pai - Lendo do Pipe\n");
  read(pip[0],&n1,sizeof(int));
  printf("Processo Pai - Resultado = %d\n",n1);
  sleep(1);
  close(pip[0]);
 }
 return 0;
}
