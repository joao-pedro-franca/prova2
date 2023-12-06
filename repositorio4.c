#include <stdio.h>
#include <stdlib.h>

//Tem que compilar na mão pelo Shell
//Comando: gcc main.c -o a (a sendo o nome do atalho)
//Comando: ./a (número de elementos)

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printf("Informe o número de elementos: \n");

    return -1;
  }

  int numElementos = atoi(argv[1]);
  int vec[numElementos];

  for (int i = 0; i < numElementos; i++)
    vec[i] = 0;

  for (int i = 0; i < numElementos; i++)
    vec[i] = i;
  printf("%s%13s\n", "Elementos", "Valor");

  for (int i = 0; i < numElementos; i++)
    printf("%7d%13d\n", i, vec[i]);

  return 0;
}