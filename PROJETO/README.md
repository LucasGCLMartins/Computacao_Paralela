# Projeto
- O projeto consiste em construir uma solução paralela cujo valor de S seja o maior possível, ou seja,
possua a melhor aproximação para a série de Taylor calculando o valor de e. O grupo deverá
apresentar os seguintes resultados na entrega: <br>
• O valor de e final calculado;<br>
• O tempo T que levou para atingir esse valor <br>

# Como executar o código
- SERIAL:<br>
Para executar o codigo serial, é necessario baixar a biblioteca GMP, usando o comando: sudo apt-get install libgmp3-dev<br>
Depois, criar o executavel com o comando: gcc -o serial serial.c -lgmp<br>
E por fim rodando o executavel com o comando: ./serial<br>
- PARALELO
Para criar o executavel]: gcc -o serial serial.c -lgmp -fopenmp<br>
E por fim rodar o executavel com o comando: ./serial<br>
# Patch Notes
- V1: Versão Serial e prints de execucao
-
# Tempo de execucao
<table>
<tr><th>Serial </th><th>Paralelo</th></tr>
<tr><td>

|&nbsp;|Minutos|Segundos|
|--|--|--|
|Real|1m9.452s|69.452s|
|User|1m9.447s|69.447s|
|Sys|0,000|0,000|
  
</td><td>

|&nbsp;|Teste 1|Teste 2| 
|--|--|--|
|Real|0m25.086s|25.086s
|User|0m50.150s|50.150s
|Sys|0,000|0,000|
  
</td></tr> </table>

# Speedup
- Serial V1 vs Paralelo V2
$$
S<sub>p</sub> = \frac{T(1)}{T(N)} => S<sub>p</sub> = \frac{69.447s}{50.150}=sub>p</sub> = 1.38478
$$

# Execucao na AWS
- Serial <br>
![image](https://user-images.githubusercontent.com/83303272/236924653-10673381-236c-4dec-a30f-d841d6010f3b.png)
- Primeiro Teste de Paralelo (resultado errado) <br>
![image](https://user-images.githubusercontent.com/83303272/236928617-d69bb471-c50c-4bf4-b20e-d814f640ae2d.png)


