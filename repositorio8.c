#include <stdio.h>

//Foi perguntado a 20 alunos o nível de qualidade da comida na cantina da UESC, em uma escala de 0 a 5 (0 significa horrorosa e 5 significa excelente). Escreva um programa que resuma os resultados da pesquisa (mostre a quantidade de vezes que aparece cada nota), imprima um histograma com os resultados.

int main() {
    int respostas[20];

    printf("Digite as respostas dos alunos (entre 0 e 5):\n");
    for (int i = 0; i < 20; i++) {
        do {
            printf("Aluno %d: ", i + 1);
            scanf("%d", &respostas[i]);
        } while (respostas[i] < 0 || respostas[i] > 5);
    }

    int contagem[6] = {0};

    for (int i = 0; i < 20; i++) {
        contagem[respostas[i]]++;
    }

    printf("\nResumo das respostas:\n");
    for (int i = 0; i <= 5; i++) {
        printf("Nota %d: %d vezes\n", i, contagem[i]);
    }

    printf("\nHistograma:\n");
    for (int i = 0; i <= 5; i++) {
        printf("Nota %d: ", i);
        for (int j = 0; j < contagem[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}