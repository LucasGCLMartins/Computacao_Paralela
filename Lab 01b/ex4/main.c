#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50]="Ayrton", nome2[50]="Zuleide";

    if (strcmp(nome1, nome2) < 0) {
        printf("%s\n%s\n", nome1, nome2);
    } else {
        printf("%s\n%s\n", nome2, nome1);
    }
    
    nome1[50]="Zuleide";
    nome2[50]="Ayrton";
    
    if (strcmp(nome1, nome2) < 0) {
        printf("%s\n%s\n", nome1, nome2);
    } else {
        printf("%s\n%s\n", nome2, nome1);
    }
    return 0;
}
