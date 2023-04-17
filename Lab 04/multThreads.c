#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define M 3
#define NUM_THREADS 10

int A [M][M] = { {1,2,3}, {4,5,6}, {7,8,9} };
int B [M][M] = { {9,8,7}, {6,5,4}, {3,2,1} };
int C [M][M];

struct v
{
    int i; /* Fileira */
    int j; /* Coluna */
};

//Programa usando as threads que multiplica cada elemento da fileira pelo da coluna
void *runner(void *param)
{
    struct v *data = param; //Estrutura que armazena os dados
    int n, sum = 0; //Contador e soma

    //Fileira multiplicada pela coluna
    for(n = 0; n< M; n++)
    {
        sum += A[data->i][n] * B[n][data->j];
    }
    //Coloca a soma no local certo
    C[data->i][data->j] = sum;

    //Sai da thread
    pthread_exit(0);
}

int main(int argc, char *argv[])
{
    int i,j, count = 0;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            //Coloca uma fileira e uma coluna em cada thread
            struct v *data = (struct v *) malloc(sizeof(struct v));
            data->i = i;
            data->j = j;
            /* Cria a thread passando os seus dados como paramentro */
            pthread_t tid;       //ID da Thread
            pthread_attr_t attr; //Atributos da thread
            //Atributos ininciais
            pthread_attr_init(&attr);
            //Cria a thread
            pthread_create(&tid,&attr,runner,data);
            //Processo pai espera
            pthread_join(tid, NULL);
            count++;
        }
    }

    //Imprime a matriz
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}


