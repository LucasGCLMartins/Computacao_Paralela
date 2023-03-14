#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] = "exemplo de string";
    char caractere = 'd';
    char *ptr;
    printf("String: %s\n", string);

    ptr = strchr(string, caractere);

    if (ptr != NULL)
    {
        printf("O caractere '%c' foi encontrado na posição %ld da string.\n", caractere, ptr - string);
    }
    else
    {
        printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    }

    return 0;
}
