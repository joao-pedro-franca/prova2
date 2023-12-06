#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {
int i, n[N] = {32, 27, 64, 18, 95}, soma = 0;
  for(i=0; i<N; i++)
    soma += n[i];

  printf("%s%13s\n", "Elemento", "Valor");
  for(i=0; i<N; i++)
    printf("%7d%13d\n", i, n[i]);
printf("Soma: %d\n", soma);

  system("PAUSE");
  return 0;
}