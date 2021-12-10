# Projeto-final

Cálculo do valor de pi, baseado nos slides vistos em aula, e algumas coisas vistas por fora, na internet. Tudo o que foi feito, foi com base nas aulas e slides da disciplina de Computação Paralela.
Realizei o código a partir de uma máquina virtual.

Para compilarmos o programa:

```
gcc −g −Wall −fopenmp −o ProjetoFinal ProjetoFinal.c
```

Para executarmos o programa, utilizaremos 10 threads: 

```
./ProjetoFinal 10
```
Se quisermos deixar a execução mais rápida, podemos utilizar mais threads.

A saída do programa será isso: 

![image](https://user-images.githubusercontent.com/56848726/145510774-402d08c4-0f0d-437f-a20e-61ba3a06d5d1.png)


Se abaixarmos o valor de contas a serem executadas a precisão será bem menor, gerando um número cada vez mais longe de pi:

![image](https://user-images.githubusercontent.com/56848726/145511007-6637dd12-6c95-48df-afde-d2400d44cf88.png)


Nesse caso, utilizei o valor de 10^100, ao invés de 10^100000, do próprio código.
