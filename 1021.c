#include <stdio.h>

int main() {
    double valor;
    int notas, moedas, centavos;

    scanf("%lf", &valor);

    // Convertendo o valor total para centavos (evita problemas com ponto flutuante)
    int totalCentavos = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");

    // Notas
    notas = totalCentavos / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    totalCentavos %= 10000;

    notas = totalCentavos / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    totalCentavos %= 5000;

    notas = totalCentavos / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    totalCentavos %= 2000;

    notas = totalCentavos / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    totalCentavos %= 1000;

    notas = totalCentavos / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    totalCentavos %= 500;

    notas = totalCentavos / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    totalCentavos %= 200;

    printf("MOEDAS:\n");

    // Moedas
    moedas = totalCentavos / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    totalCentavos %= 100;

    moedas = totalCentavos / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    totalCentavos %= 50;

    moedas = totalCentavos / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    totalCentavos %= 25;

    moedas = totalCentavos / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    totalCentavos %= 10;

    moedas = totalCentavos / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    totalCentavos %= 5;

    moedas = totalCentavos / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}
