#include <stdio.h>

int main() {
  int cha;

  printf("Digite um número inteiro: ");
  scanf("%d", &cha);

  cha = (cha < 0) ? -cha : cha;

  if (cha >= 32 && cha <= 126) {
    printf("Caractere imprimível em formato decimal: %d\n", cha);
    printf("Caractere imprimível em formato octal: %o\n", cha);
    printf("Caractere imprimível em formato hexadecimal: %x\n", cha);
    printf("Caractere imprimível: %c\n", cha);
  } else if (cha < 32) {
    cha = 32;
    printf("Valor convertido para 32 em formato decimal: %d\n", cha);
    printf("Valor convertido para 32 em formato octal: %o\n", cha);
    printf("Valor convertido para 32 em formato hexadecimal: %x\n", cha);
    printf("Valor convertido para 32, que é o caractere imprimível: %c\n", cha);
  } else if (cha > 127) {
    cha = cha % 127;
    printf("Valor convertido para o intervalo dos caracteres em formato decimal: %d\n", cha);
    printf("Valor convertido para o intervalo dos caracteres em formato octal: %o\n", cha);
    printf("Valor convertido para o intervalo dos caracteres em formato hexadecimal: %x\n", cha);
    printf("Valor convertido para o intervalo dos caracteres: %c\n", cha);
  }

  return 0;
}
