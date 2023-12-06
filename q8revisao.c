#include <stdio.h>

int main(void) {

  int num, valor=0, soma=0;

printf("Digite um número inteiro positivo:\n");
scanf("%d", &num);
printf("\n");

if (num < 0) {
    printf("Número inválido");
} else {
    for (int i = 1; i <= num; i++) {
      valor = i;
      soma += valor;
      printf("%d\n", valor);
    }
  printf("A soma é igual: %d", soma);
}
  
  return 0;
}