#include <stdio.h>

int main() {
    float peso, altura, imc;
    int sexo;

  printf("Digite o sexo (1 para masculino, 2 para feminino):\n");
    scanf("%i", &sexo);

    printf("Digite o peso (em kg):\n");
    scanf("%f", &peso);

    printf("Digite a altura (em metros):\n");
    scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("Seu IMC: %.2f\n", imc);

    if (sexo == 1) {
        if (imc < 20.7) {
            printf("Abaixo do peso.\n");
        } else if (imc < 26.4) {
            printf("Peso ideal.\n");
        } else if (imc < 27.8) {
            printf("Levemente acima do peso.\n");
        } else if (imc < 31.1) {
            printf("Acima do peso.\n");
        } else {
            printf("Obeso.\n");
        }
    } else if (sexo == 2) {
        if (imc < 19.1) {
            printf("Abaixo do peso.\n");
        } else if (imc < 25.8) {
            printf("Peso ideal.\n");
        } else if (imc < 27.3) {
            printf("Levemente acima do peso.\n");
        } else if (imc < 32.3) {
            printf("Acima do peso.\n");
        } else {
            printf("Obeso.\n");
        }
    }


    return 0;
}