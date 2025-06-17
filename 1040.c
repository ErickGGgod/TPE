#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, exame, media_final;

    // Leitura das 4 notas
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Cálculo da média ponderada
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;

    // Exibe a média com uma casa decimal
    printf("Media: %.1f\n", media);

    // Verificação da situação do aluno
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);

        media_final = (media + exame) / 2.0;

        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media_final);
    }

    return 0;
}
