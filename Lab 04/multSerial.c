
#include <stdio.h>
#include <stdlib.h>
  
#define M 3

  

  
int main()
{
  int mat1[M][M] = { { 1, 2, 3 }, {4,5,6 },{7,8,9 }};
  
    int mat2[M][M] = { {9,8,7 },{ 6, 5 ,4},{3,2,1 }};
  
  int rslt[M][M];
  
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            rslt[i][j] = 0;
  
            for (int k = 0; k < M; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
  
            printf("%d\t", rslt[i][j]);
        }
  
        printf("\n");
    }
  
    return 0;
}
  