#include <stdio.h>

int main() {
    int T, N[1000];

    // Leitura do valor de T
    scanf("%d", &T);

    // Preenchimento do vetor com valores de 0 até T-1 repetidamente
    for (int i = 0; i < 1000; i++) {
        N[i] = i % T;
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
