#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int opcao=0;
    printf("Matriz:\n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        printf("%i ",matriz[i][j]);
      }
      printf("\n");
    }
    printf("Deseja somar(1) ou multiplicar(2) as linhas? ");
    scanf("%i",&opcao);
    
    if(opcao==1){
      for(int i=0;i<3;i++){
        matriz[1][i]=matriz[0][i]+matriz[1][i];
      }
    }else if(opcao==2){
      for(int i=0;i<3;i++){
        matriz[1][i]=matriz[0][i]*matriz[1][i];
      }
    }
    else{
      printf("Opcao invalida");
      
    }
    printf("Matriz modificada:\n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        printf("%i ",matriz[i][j]);
      }
      printf("\n");
    }

    return 0;
}
