#include <stdio.h>
#include <stdlib.h>

#define M 3 //tamanhos das matrizes/vetores

int A[M][M] = {{1,2,3}, {4,5,6}, {7,8,9}};
int B[M] = {9,8,7};
int C[M] = {0,0,0};

int main()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            C[i] = 0;

            for (int k = 0; k < M; k++)
            {
                C[i] += A[i][k] * B[k];
            }

        }
        printf("%d ", C[i]); //esperado 46 118 190
    }
    return 0;
}

