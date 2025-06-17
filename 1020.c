#include <stdio.h>

int main() {
    int totalDias, anos, meses, dias;

    // Entrada: total de dias
    scanf("%d", &totalDias);

    // Cálculo
    anos = totalDias / 365;
    totalDias %= 365;

    meses = totalDias / 30;
    dias = totalDias % 30;

    // Saída
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
