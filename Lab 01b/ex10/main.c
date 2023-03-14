#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define LINHA 5
#define COLUNA 5

int main() {
    int matriz[LINHA][COLUNA];
    int linhas=5, colunas=5, i, j, num, option;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j]=rand()%100;
        }
    }
    printf("Matriz original\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite 1 para multiplicar uma linha ou 2 para multiplicar uma coluna: ");
    scanf("%d", &option);

    printf("Digite o número pelo qual deseja multiplicar a linha/coluna: ");
    scanf("%d", &num);

    if (option == 1) {
        int lin;

        printf("Digite o número da linha que deseja multiplicar: ");
        scanf("%d", &lin);

        for (j = 0; j < colunas; j++) {
            matriz[lin][j] *= num;
        }


        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    } else if (option == 2) {
        int col;

        printf("Digite o número da coluna que deseja multiplicar: ");
        scanf("%d", &col);

        for (i = 0; i < linhas; i++) {
            matriz[i][col] *= num;
        }

        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
