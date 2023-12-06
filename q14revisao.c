#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int abastecimentos;
  float totalkm = 0, totallitro = 0;
  float qkm, ql, rendimento, total;

  printf("Digite o número de vezes que você abasteceu: ");
  scanf("%i", &abastecimentos);
  printf("\n");

  for (int i = 1; i <= abastecimentos; i++) {
    printf("\nDigite o número de quilômetros percorridos: ");
    scanf("%f", &qkm);
    printf("Digite o número de litros consumidos: ");
    scanf("%f", &ql);

    rendimento = qkm / ql;
    printf("A taxa km/litro para esse abastecimento foi: %.2f\n", rendimento);

    totalkm += qkm;
    totallitro += ql;
  }

  total = totalkm / totallitro;
  printf("\nA taxa total de km/litro foi: %.2f", total);

  return 0;
}