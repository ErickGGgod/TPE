#include <stdio.h>

int main() {
    int N[10], V;

    // Leitura do valor inicial
    scanf("%d", &V);

    // Preenche a primeira posição com o valor lido
    N[0] = V;

    // Calcula os valores seguintes (dobro do anterior)
    for (int i = 1; i < 10; i++) {
        N[i] = N[i - 1] * 2;
    }

    // Impressão do vetor
    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
