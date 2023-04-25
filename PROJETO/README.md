# Projeto
- O projeto consiste em construir uma solução paralela cujo valor de S seja o maior possível, ou seja,
possua a melhor aproximação para a série de Taylor calculando o valor de e. O grupo deverá
apresentar os seguintes resultados na entrega: <br>
• O valor de e final calculado;<br>
• O tempo T que levou para atingir esse valor <br>

# Como executar o código
- Para executar o programa SERIAL é necessario primeiro compilar o codigo, após isso somente será preciso rodar o executável
# Patch Notes
- V1: Versão Serial e prints de execucao
-
# Tempo de execucao
--
<table>
<tr><th>Serial </th><th>Paralelo</th></tr>
<tr><td>

|&nbsp;|Teste 1|Teste 2|Teste 3|Média| 
|--|--|--|--|--|
|Real|0,009|0,006|0,006|0,007|
|User|0,009|0,005|0,003|0,0056|
|Sys|0,000|0,000|0,004|0,0013|
  
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
![image](https://user-images.githubusercontent.com/83303272/234407369-d955ad73-19cb-4169-9a94-5a76e0c8a231.png)

