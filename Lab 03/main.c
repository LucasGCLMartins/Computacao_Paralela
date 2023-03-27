#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int shmid;
    int *valor;
    int pid;

    shmid = shmget(IPC_PRIVATE, sizeof(int), IPC_CREAT | 0666);

    if (shmid == -1) {
        perror("Erro na criação da memória compartilhada");
        exit(1);
    }

    valor = shmat(shmid, NULL, 0);
    printf("LAB 03 - MEMORIA\nApos inserir o valor, o processo filho irá somar 2 e retornará para o pai que o multiplicará por 4\nSelecione o valor inicial: ");
    scanf("%i",valor);

    printf("Valor inicial: %d\n", *valor);

    pid = fork();

    if (pid == -1) {
        perror("fork");
        return 1;
    } else if (pid == 0) {
        *valor += 2;
        printf("Valor modificado pelo processo filho: %d\n", *valor);
        shmdt(valor);
        return 0;
    } else {
        wait(NULL);
        *valor *= 4;
        printf("Valor final: %d\n", *valor);
        shmdt(valor);
        shmctl(shmid, IPC_RMID, NULL);
        return 0;
    }

    return 0;
}
