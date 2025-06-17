#include <stdio.h>

int main() {
    int N;
    int X[1000];  // Garantido que N < 1000
    int menor, pos;

    // Leitura da quantidade de elementos
    scanf("%d", &N);

    // Leitura dos elementos do vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    // Inicializa com o primeiro valor
    menor = X[0];
    pos = 0;

    // Busca o menor valor e sua posição
    for (int i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            pos = i;
        }
    }

    // Impressão dos resultados
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}
