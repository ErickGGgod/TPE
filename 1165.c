#include <stdio.h>
#include <math.h>

int main() {
    int N, X, i, ehPrimo;

    // Lê o número de casos de teste
    scanf("%d", &N);

    while (N--) {
        scanf("%d", &X);
        ehPrimo = 1; // assume que é primo

        if (X <= 1) {
            ehPrimo = 0;
        } else {
            // Testa divisores de 2 até a raiz quadrada de X
            for (i = 2; i <= sqrt(X); i++) {
                if (X % i == 0) {
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo)
            printf("%d eh primo\n", X);
        else
            printf("%d nao eh primo\n", X);
    }

    return 0;
}
