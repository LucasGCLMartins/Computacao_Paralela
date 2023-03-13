#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LINHAS 5
#define COLUNAS 7

int main() {
    int matriz[LINHAS][COLUNAS];
    int transposta[COLUNAS][LINHAS];
    int lin=5, cols=6, i, j;


    for (i = 0; i < lin; i++) {
        for (j = 0; j < cols; j++) {
            matriz[i][j]=rand()%100;
        }
    }

    for (i = 0; i < cols; i++) {
        for (j = 0; j < lin; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposta:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < lin; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
