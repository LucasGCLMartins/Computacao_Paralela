# Projeto
- O projeto consiste em construir uma solução paralela cujo valor de S seja o maior possível, ou seja,
possua a melhor aproximação para a série de Taylor calculando o valor de e. O grupo deverá
apresentar os seguintes resultados na entrega: <br>
• O valor de e final calculado;<br>
• O tempo T que levou para atingir esse valor <br>

# Como executar o código
- SERIAL:<br>
Para executar o codigo serial, é necessario baixar a biblioteca GMP, usando o comando: sudo apt-get install libgmp3-dev
Depois, criar o executavel com o comando: gcc -o serial serial.c -lgmp
E por fim rodando o executavel com o comando: ./serial
- PARALELO
# Patch Notes
- V1: Versão Serial e prints de execucao
-
# Tempo de execucao
--
<table>
<tr><th>Serial </th><th>Paralelo</th></tr>
<tr><td>

|&nbsp;|Teste|--|
|--|Minutos|Segundos|
|Real|1m9.452s|69.452s|
|User|1m9.447s|69.447s|
|Sys|0,000|0,000|
  
</td><td>

|&nbsp;|Teste 1|Teste 2|Teste 3|Média| 
|--|--|--|--|--|
|Real|--|--|--|--|
|User|--|--|--|--|
|Sys|--|--|--|--|
  
</td></tr> </table>

# Speedup

$$
S<sub>p</sub> = \frac{T(1)}{T(N)} => S<sub>p</sub> = \frac{0,0056}{--}=> S<sub>p</sub> = --
$$

# Execucao na AWS
- Serial <br>
![image](https://user-images.githubusercontent.com/83303272/236924653-10673381-236c-4dec-a30f-d841d6010f3b.png)

