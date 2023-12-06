#include <stdio.h>
#include <stdlib.h>

// Ordem Inversa
int main(int argc, char *argv[]) {
  int numElementos = atoi(argv[1]);

  printf("Número de elementos %d\n", numElementos);

  int myvector[numElementos];
  int soma = 0;

  for (int i = numElementos - 1; i > 0; i--) {
    myvector[i] = i;
    printf("%d\n", myvector[i]);
    soma += myvector[i];
  }

  printf("Sizeof: %ld\n", sizeof(myvector));
  printf("Soma: %d\n", soma);

  return 0;
}