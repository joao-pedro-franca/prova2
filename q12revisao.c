#include <math.h>
#include <stdio.h>

int main(void) {
  float cateto1, cateto2, hipotenusa, area, perimetro, cateto1q, cateto2q, hipotenusaq;

  printf("Digite o valor do tamanho de um dos catetos:");
  scanf("%f", &cateto1);

  printf("Digite o valor do tamanho do outro cateto:");
  scanf("%f", &cateto2);

  cateto1q = cateto1*cateto1;
  cateto2q = cateto2*cateto2;

  hipotenusaq = cateto1q + cateto2q;
  hipotenusa = sqrt(hipotenusaq);
  
  printf("\nO tamanho do quadrado da hipotenusa é: %.2f", hipotenusaq);

  area = (cateto1*cateto2)/2;
  printf("\nA área do triângulo retângulo é: %.2f", area);

  perimetro = cateto1 + cateto2 + hipotenusa;
  printf("\nO valor do perímetro do triângulo retângulo é: %.2f", perimetro);

  return 0;
}