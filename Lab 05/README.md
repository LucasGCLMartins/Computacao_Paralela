# Lab 05 - Trapezio
Entregue as soluções serial e paralela para o problema dos trapézios, juntamente com uma evidência de que você conseguiu executar pelo menos uma vez em cada ambiente. Qualquer coisa serve como evidência, até um print é suficiente. Para cada uma das execuções, adicione o tempo de execução e calcule o speedup para a versão paralela.


# Como executar o código
  - Para executar é necessario primeiro compilar o codigo, após isso somente será preciso rodar o executável 

# Tempo de execucao
 - Foram executadas 3 vezes o calculo dos trapezios e calculadas as medias

<table>
<tr><th>Serial </th><th>Paralelo</th></tr>
<tr><td>

|&nbsp;|Teste 1|Teste 2|Teste 3|Média| 
|--|--|--|--|--|
|Real|0,001|0,001|0,001|0,001|
|User|0,001|0,001|0,001|0,001|
|Sys|0,000|0,000|0,000|0,000|
  
</td><td>

|&nbsp;|Teste 1|Teste 2|Teste 3|Média| 
|--|--|--|--|--|
|Real|0,001|0,001|0,001|0,001|
|User|0,002|0,001|0,001|0,0013|
|Sys|0,000|0,000|0,000|0,000|
  
</td></tr> </table>

# Speedup

$$
S<sub>p</sub> = \frac{T(1)}{T(N)} => S<sub>p</sub> = \frac{0,001}{0,0013}=> S<sub>p</sub> = 0,769
$$

# Prints
- Serial
![image](https://user-images.githubusercontent.com/83303272/233197869-19884ca3-0e4b-49ee-8c3e-7ab9b3b9d988.png)

-Threads
![image](https://user-images.githubusercontent.com/83303272/233197935-7ace6fd6-246d-4baa-b06f-f0773ad6c739.png)

