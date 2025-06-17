#include <stdio.h>

int main() {
    int T, N;
    unsigned long long fib[61];  // Vetor para armazenar os valores de Fibonacci até o 60

    // Preenche os dois primeiros termos
    fib[0] = 0;
    fib[1] = 1;

    // Calcula os demais termos até o 60º
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Leitura do número de casos de teste
    scanf("%d", &T);

    // Para cada caso, imprime o valor de Fibonacci correspondente
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }

    return 0;
}
