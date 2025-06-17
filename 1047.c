#include <stdio.h>

int main() {
    int hInicio, mInicio, hFim, mFim;
    int inicioMin, fimMin, duracaoMin, duracaoHora, duracaoMinuto;

    // Leitura das horas e minutos de início e fim
    scanf("%d %d %d %d", &hInicio, &mInicio, &hFim, &mFim);

    // Converte tudo para minutos
    inicioMin = hInicio * 60 + mInicio;
    fimMin = hFim * 60 + mFim;

    // Se o tempo final for menor ou igual ao inicial, significa que passou para o dia seguinte
    if (fimMin <= inicioMin) {
        fimMin += 24 * 60;
    }

    // Calcula a duração em minutos totais
    duracaoMin = fimMin - inicioMin;

    // Converte para horas e minutos
    duracaoHora = duracaoMin / 60;
    duracaoMinuto = duracaoMin % 60;

    // Saída
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);

    return 0;
}
