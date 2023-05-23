# Projeto
- O projeto consiste em construir uma solução paralela cujo valor de S seja o maior possível, ou seja,
possua a melhor aproximação para a série de Taylor calculando o valor de e. O grupo deverá
apresentar os seguintes resultados na entrega: <br>
• O valor de e final calculado;<br>
• O tempo T que levou para atingir esse valor <br>

# Como executar o código
- SERIAL:<br>
Para executar o codigo serial, é necessario baixar a biblioteca GMP, usando o comando: sudo apt-get install libgmp3-dev<br>
Depois, criar o executavel com o comando: gcc -o serial eulerSerial.c -lgmp<br>
E por fim rodando o executavel com o comando: ./serial<br>
- PARALELO:<br>
Para criar o executavel: gcc -o paralelo eulerParaleloFinal.c -lgmp -fopenmp<br>
E por fim rodar o executavel com o comando: ./paralelo 2<br>
# Patch Notes
- V1: Versão Serial e prints de execucao
- V2: Versao Paralela Final
# Tempo de execucao
<table>
<tr><th>Serial </th><th>Paralelo Final</th></tr>
<tr><td>

|&nbsp;|Minutos|Segundos|
|--|--|--|
|Real|1m9.452s|69.452s|
|User|1m9.447s|69.447s|
|Sys|0,000|0,000|
  
</td><td>

|&nbsp;|Minutos|Segundos|
|--|--|--|
|Real|0m8.793s|8.793s|
|User|0m14.679s|14.679s|
|Sys|0,000|0,000|
  
</td></tr> </table>

# Speedup

$$
S<sub>p</sub> = \frac{T(1)}{T(N)} => S<sub>p</sub> = \frac{69.447}{14.679}=> S<sub>p</sub> = 4.731
$$

# Execucao na AWS
- Serial <br>
![image](https://user-images.githubusercontent.com/83303272/236924653-10673381-236c-4dec-a30f-d841d6010f3b.png)
- Paralelo <br>
![image](https://github.com/LucasGCLMartins/Computacao_Paralela/assets/83303272/fba8962a-50cc-41c0-9c51-467f3c806a65)

# Decomposição de tarefas
Considere o algoritmo desenvolvido para o projeto final e responda às seguintes perguntas:

Quais são as tarefas no caminho crítico para cada grafo de dependência? Para responder a pergunta, apresente um DAG do seu projeto.<br>

![image](https://github.com/LucasGCLMartins/Computacao_Paralela/assets/83303272/971b8cdd-7d5a-49db-98e9-c03f53a1d50d)
T1: Chama a funcao Main e a funcao de Euler. <br>
T2 e T3: Quantidade de threads, para mais threads, mais tarefas. Realizando a funcao de loop e fatorial. Elas se juntam na T4.<br>
T4: Tarefa que é a soma das outras duas tarefas, finalizacao do programa e mostra o resultado de Euler. <br>


Qual é o limite inferior do tempo de execução paralela para cada decomposição?
   O limite inferior é igual ao        tempo minimo de execucao da        parte serial do codigo

Quantos processadores são necessários para se conseguir o tempo mínimo de execução?
   O numero de processadores deve      ser igual ao de threads, caso      contrario ocorrera perda de        performance, nesse caso é 2

Qual é o grau máximo de concorrência?
   Ele é igual ao número de threads    do programa, que é 2

Qual é o paralelismo médio?
Considere, para todos os exemplos, que todas as tarefas consomem uma unidade de tempo para execução.
   69.447s / 14.679s = 4.731
# Programa paralelo
A lógica utilizada para a versão paralela foi a seguinte:<br>

![image](https://github.com/LucasGCLMartins/Computacao_Paralela/assets/83303272/8bf2f30a-092c-4dcd-9fb1-820946e15d45)

Ao usar 2 threads, por exemplo, o total de iteracoes (10000) é dividido por 2, cada thread realizando uma metade. Toda thread que nao é a primeira, também comecara a partir do indice 1 para ser possivel calcular o fatorial do seus numeros. Esse fatorial, tambem, é calculado a cada loop, inves de ser feita em uma funcao separada, diminuindo o seu tempo de execucao.
