#include <stdio.h>

int main() {
    
    float salarioBruto, salarioLiquido, imposto, valeAlimentacao;
    const float salarioMinimo = 1320.0;

    printf("Informe o valor do salário bruto: ");
    scanf("%f", &salarioBruto);
    
    imposto = 0.075 * salarioBruto;
   
    printf("Informe o valor do vale alimentação: ");
    scanf("%f", &valeAlimentacao);

    salarioLiquido = salarioBruto - imposto + valeAlimentacao;

    if (salarioLiquido < salarioMinimo) {
        salarioLiquido = salarioMinimo; 
        printf("O salário líquido foi ajustado para o salário mínimo de %.2f\n", salarioMinimo);
    }
    
    printf("O salário líquido é: %.2f\n", salarioLiquido);
    return 0;
}
