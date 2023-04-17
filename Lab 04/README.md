# Lab 03 - Memoria
Considere o trecho de código em anexo para resolver o problema da multiplicação matriz-vetor utilizando pthreads. Crie uma solução serial e outra paralela com dois núcleos, e para ambas apresente os tempos e o speedup.


# Como executar o código
  - Para executar é necessario primeiro compilar o codigo, após isso somente será preciso rodar o executável 

# Tempo de execucao
 - Foram executadas 3 vezes as funcoes de multiplicacao de matriz e calculadas as medias

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
|Real|0,002|0,001|0,002|0,0016|
|User|0,002|0,001|0,002|0,0016|
|Sys|0,000|0,000|0,000|0,000|
  
</td></tr> </table>
  
