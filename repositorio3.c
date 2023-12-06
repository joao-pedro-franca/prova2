#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printf("Entre com o número de elementos...\n");
    return -1;
  }
  int nOfElements = atoi(argv[1]);
  int vec[nOfElements];

  for (int i = 0; i < nOfElements; i++)
    vec[i] = 0;

  for (int i = 0; i < nOfElements; i++)
    vec[i] = i;
  printf("%s %13s\n", "Elementos", "Valor");
  for (int i = 0; i < nOfElements; i++)
    printf("%7d %13d\n", i, vec[i]);

  return 0;
}