#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char* argv[]){

    int thread_count = strtol(argv[1], NULL, 10);

    int i;
    float pi = 0.0;
    float sinal = 1.0;
    float soma = 0.0; // aqui serão somados todos os resultados das contas, para depois calcular o valor de pi
    int max = 10^100000; //numero maximo de vezes que os calculos serão feitos

    #pragma omp parallel for num_threads(thread_count) reduction (+:soma) private (sinal)

    for (i = 0; i < max; i++) {
        if(i % 2 == 0){ //se o numero for par o proximo sinal é positivo
            sinal = 1.0;
        } else {  //se o numero for impar o proximo sinal é negativo
            sinal = -1.0;
        }
        soma += sinal / (2 * i + 1); 
        int my_rank = omp_get_thread_num(); //variavel para mostrar em qual thread estamos
        int thread_count = omp_get_num_threads(); //variavel para mostrar a contagem total das threads
        printf("Thread %d of %d\n", my_rank, thread_count); 
    }

    pi = 4 * soma; 

    printf("Valor aproximado de Pi: %f\n", pi);

    return 0;
}
