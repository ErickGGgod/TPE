#include <stdio.h>

int main() {
    int idadeDias, anos, meses, dias;

    // Lê a idade em dias
    scanf("%d", &idadeDias);

    // Calcula anos, meses e dias
    anos = idadeDias / 365;
    idadeDias %= 365;

    meses = idadeDias / 30;
    dias = idadeDias % 30;

    // Imprime o resultado
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
