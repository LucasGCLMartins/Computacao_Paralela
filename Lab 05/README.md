# Lab 05 - Trapezio
Entregue as soluções serial e paralela para o problema dos trapézios, juntamente com uma evidência de que você conseguiu executar pelo menos uma vez em cada ambiente. Qualquer coisa serve como evidência, até um print é suficiente. Para cada uma das execuções, adicione o tempo de execução e calcule o speedup para a versão paralela.


# Como executar o código
  - Para executar é necessario primeiro compilar o codigo, após isso somente será preciso rodar o executável. Para o codigo paralelo, é necessario colocar a quantidades de threads que serão usadas na execucao. No exemplo usado abaixo, foram usadas 10

# Tempo de execucao
 - Foram executadas 3 vezes o calculo dos trapezios e calculadas as medias

<table>
<tr><th>Serial </th><th>Paralelo</th></tr>
<tr><td>

|&nbsp;|Teste 1|Teste 2|Teste 3|Média| 
|--|--|--|--|--|
|Real|0,001|0,001|0,001|0,001|
|User|0,001|0,001|0,000|0,001|
|Sys|0,000|0,000|0,001|0,000|
  
</td><td>

|&nbsp;|Teste 1|Teste 2|Teste 3|Média| 
|--|--|--|--|--|
|Real|0,002|0,002|0,002|0,002|
|User|0,002|0,002|0,000|0,0013|
|Sys|0,000|0,000|0,002|0,0006|
  
</td></tr> </table>

# Speedup

$$
S<sub>p</sub> = \frac{T(1)}{T(N)} => S<sub>p</sub> = \frac{0,001}{0,002}=> S<sub>p</sub> = 0,5
$$

# Prints
- Serial <br>
![image](https://user-images.githubusercontent.com/83303272/234125920-72ab8add-ee44-45e0-af8e-f26d2fb67378.png)

- Threads <br>
![image](https://user-images.githubusercontent.com/83303272/234125846-2467e8cb-c085-40f5-91e6-cf53fe579b70.png)


# Conclusao
O uso da funcao serial retorna um valor mais exato enquanto que a paralela altera o valor conforme o numero de threads usadas.
