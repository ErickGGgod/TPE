#include <stdio.h>

int main() {
    float A[100];

    // Leitura dos 100 valores
    for (int i = 0; i < 100; i++) {
        scanf("%f", &A[i]);
    }

    // Impressão das posições cujo valor é <= 10.0
    for (int i = 0; i < 100; i++) {
        if (A[i] <= 10.0) {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}
