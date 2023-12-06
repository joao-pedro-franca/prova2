#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int vec[5] = {0, 1, 2, 3, 4};

  printf("%s %13s\n", "Elementos", "Valor");
  for (int i = 0; i < 5; i++)
    printf("%7d %13d\n", i, vec[i]);

  return 0;
}