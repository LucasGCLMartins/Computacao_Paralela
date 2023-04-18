#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define qtde 2 //quantidade de threads
#define M 3 //tamanho das matrizes/vetores

int A[M][M] = {{1,2,3}, {4,5,6}, {7,8,9}};
int B[M] = {9,8,7};
int C[M] = {0,0,0};


void *Pth_mat_vct(void *rank);

int main()
{
    long thread; //thread que ficara no vetor

    pthread_t *threads;

    threads = malloc(qtde * sizeof(pthread_t)); //cria threads com base na quantidade

    for (thread = 0; thread < qtde; thread++)
    {
        pthread_create(&threads[thread], NULL, Pth_mat_vct,(void*)  thread); //cria e executa as threads na funcao Pth_mat_vct
    }

    for(thread = 0; thread < qtde; thread++)
    {
        pthread_join(threads[thread],NULL); //espera a thread terminar
    }

    for(int i=0; i<M; i++)
    {
        printf("%d ",C[i]); //imprime esperado 46 118 190
    }

    return 0;
}

void *Pth_mat_vct(void* rank)
{
    long my_rank = (long) rank;
    int local_m = M/qtde;
    int my_first_row = my_rank*local_m;
    int my_last_row = (my_rank+1)*local_m;

    for(int i=my_first_row; i<=my_last_row; i++)
    {
        C[i] = 0;
        for (int j=0; j<=M ; j++)
        {
            C[i]+= A[i][j]*B[j]; //calcula a multiplicao da Matriz A com o vetor B e coloca no vetor resposta C
        }
    }

    pthread_exit(0);
}
