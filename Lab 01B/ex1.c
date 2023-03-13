#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define MAX_SIZE 5

int main() {
    srand(time(NULL));
    int n, i, j, min, min_row;
    int matrix[5][5];

    printf("Ordem da matriz quadrada: %d \n", MAX_SIZE);

    printf("Matriz\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matrix[i][j]=rand()%100;
            printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }

    min = matrix[0][0];
    min_row = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                min_row = i;
            }
        }
    }

    printf("\nA linha %d contem o menor elemento: %d\n", min_row + 1, min);

    return 0;
}