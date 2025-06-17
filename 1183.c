#include <stdio.h>

int main() {
    char O;
    double M[12][12];
    double soma = 0.0;
    int count = 0;
    
    scanf(" %c", &O);  // ler operação
    
    // ler matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    // somar elementos acima da diagonal principal (j > i)
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            soma += M[i][j];
            count++;
        }
    }
    
    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        printf("%.1lf\n", soma / count);
    }
    
    return 0;
}
