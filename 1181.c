#include <stdio.h>

int main() {
    int L;
    char T;
    double M[12][12];
    double soma = 0.0;
    
    // Leitura da linha e do tipo de operação
    scanf("%d", &L);
    scanf(" %c", &T);  // espaço antes do %c para consumir newline
    
    // Leitura da matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    // Calcula a soma dos elementos da linha L
    for (int j = 0; j < 12; j++) {
        soma += M[L][j];
    }
    
    // Imprime a soma ou média conforme o tipo
    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}
