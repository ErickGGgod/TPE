#include <stdio.h>

int main() {
    int N, fatorial = 1;

    // Leitura do valor de entrada
    scanf("%d", &N);

    // Cálculo do fatorial
    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    // Impressão do resultado
    printf("%d\n", fatorial);

    return 0;
}
