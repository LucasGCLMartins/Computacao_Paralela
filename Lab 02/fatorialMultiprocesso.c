#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int n, pid, status;
    int pipefd[2];

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número deve ser positivo!\n");
        return 1;
    }

    if (pipe(pipefd) == -1) {
        perror("pipe");
        return 1;
    }

    pid = fork();

    if (pid == -1) {
        perror("fork");
        return 1;
    } else if (pid == 0) {
        // processo filho

        close(pipefd[0]); // fecha a leitura do pipe

        // calcula o fatorial
        int fatorial = 1;
        for (int i = 2; i <= n; i++) {
            fatorial *= i;
        }

        // envia o resultado para o pai
        write(pipefd[1], &fatorial, sizeof(fatorial));
        close(pipefd[1]); // fecha a escrita do pipe

        return 0;
    } else {
        // processo pai

        close(pipefd[1]); // fecha a escrita do pipe

        // espera pelo resultado do filho
        wait(&status);

        // lê o resultado do pipe
        int fatorial;
        read(pipefd[0], &fatorial, sizeof(fatorial));
        close(pipefd[0]); // fecha a leitura do pipe

        printf("O fatorial de %d é %d\n", n, fatorial);

        return 0;
    }
}
