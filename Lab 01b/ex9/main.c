#include <stdio.h>
#include <stdlib.h>
#define LINHA 3
#define COLUNA 3
int main()
{
    int matriz[LINHA][COLUNA] = {{-5, 2, -999}, {4, -8, 6}, {7, 52, -1}};
    int linhas=3, colunas=3, i, j, num, option;

    printf("Matriz original:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz com os números negativos substituídos por seu módulo:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = abs(matriz[i][j]);
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
