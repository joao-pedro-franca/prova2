#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int vec[5];
  for (int i = 0; i < 5; i++)
    vec[i] = i;

  printf("%s %13s\n", "Elementos", "Valor");
  for (int i = 0; i < 5; i++)
    printf("%7d %13d\n", i, vec[i]);

  return 0;
}