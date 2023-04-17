#include <stdio.h>
#include <stdlib.h>

#define M 3

int A[M][M] = { {1,2,3}, {4,5,6}, {7,8,9} };
int B[M][M] = { {9,8,7}, {6,5,4}, {3,2,1} };
int C[M][M];

int main()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            C[i][j] = 0;

            for (int k = 0; k < M; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

