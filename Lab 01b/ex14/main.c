#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] = "exemplo de string"; 
    int posicao = 6; 
    char caractere = 'Z';

    printf("String original: %s\n", string);

    memmove(&string[posicao + 1], &string[posicao], strlen(string) - posicao + 1);
    string[posicao] = caractere;

    printf("String modificada: %s\n", string);

    return 0;
}
