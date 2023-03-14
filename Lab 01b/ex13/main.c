#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] = "exemplo de string";
    int posicao = 6;

    printf("String original: %s\n", string);


    memmove(&string[posicao], &string[posicao + 1], strlen(string) - posicao);

    printf("String modificada: %s\n", string);

    return 0;
}
