#include <stdio.h>

int main() {
    int n=11;
    printf("Número Maximo = 11\n");


    int i, j, k;
    for (i = 1; i <= n; i += 2) {
        for (k = (i - 1) / 2; k > 0; k--) {
            printf("   ");
        } 
        for (j = i; j <= n; j++) {
            printf("%2d ", j);
        }
        printf("\n");
    }

    return 0;
}
