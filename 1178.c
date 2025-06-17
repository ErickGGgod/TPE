#include <stdio.h>

int main() {
    double N[100];
    double X;

    // Leitura do valor inicial
    scanf("%lf", &X);

    // Coloca o valor na primeira posição
    N[0] = X;

    // Preenche as posições seguintes com a metade do anterior
    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2.0;
    }

    // Impressão dos valores com 4 casas decimais
    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}
