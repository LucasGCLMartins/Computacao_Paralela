#include <stdio.h>


typedef struct{
    int idade;
    float peso;
    float altura;
}PESSOA;

int main(){

    PESSOA ati[3];

    ati[0].idade=6;
    ati[0].peso=25.6;
    ati[0].altura=1.20;

    ati[1].idade=26;
    ati[1].peso=90.8;
    ati[1].altura=1.80;

    ati[2].idade=38;
    ati[2].peso=80.6;
    ati[2].altura=1.60;

    printf("JOAO:\n");
    printf("%i anos\n",ati[0].idade);
    printf("%0.1f kg\n",ati[0].peso);
    printf("%0.2f m\n\n",ati[0].altura);

    printf("LEONARDO:\n");
    printf("%i anos\n",ati[1].idade);
    printf("%0.1f kg\n",ati[1].peso);
    printf("%0.2f m\n\n",ati[1].altura);

    printf("TATIANE:\n");
    printf("%i anos\n",ati[2].idade);
    printf("%0.1f kg\n",ati[2].peso);
    printf("%0.2f m\n\n",ati[2].altura);




    return 0;
}
