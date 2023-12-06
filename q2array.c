#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

const int ARRAY_SIZE = 10000;

// Função para preencher o array com valores aleatórios entre 0 e 1000
void preencherArray(int array[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % 1001;
    }
}

// Função para imprimir o array
void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%i\t", array[i]);
    }
    printf("\n");
}

// Função para encontrar os maiores e menores valores no array
void encontrarMaioresEMenores(int array[]) {
    int maiores[3] = {0, 0, 0};
    int menores[3] = {1001, 1001, 1001};

    for (int i = 0; i < ARRAY_SIZE; i++) {
        // Verifica se o valor atual é maior do que algum dos maiores
        for (int j = 0; j < 3; j++) {
            if (array[i] > maiores[j]) {
                for (int k = 2; k > j; k--) {
                    maiores[k] = maiores[k - 1];
                }
                maiores[j] = array[i];
                break;
            }
        }

        // Verifica se o valor atual é menor do que algum dos menores
        for (int j = 0; j < 3; j++) {
            if (array[i] < menores[j]) {
                for (int k = 2; k > j; k--) {
                    menores[k] = menores[k - 1];
                }
                menores[j] = array[i];
                break;
            }
        }
    }

    printf("\nTrês maiores valores: %i, %i, %i\n", maiores[0], maiores[1], maiores[2]);
    printf("Três menores valores: %i, %i, %i\n", menores[0], menores[1], menores[2]);
}

// Função para calcular a média dos valores no array
float calcularMedia(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return (float)soma / tamanho;
}

// Função para calcular a mediana dos valores no array (requer array ordenado)
float calcularMediana(int array[], int tamanho) {
    // Implementação da mediana considerando array ordenado
    if (tamanho % 2 == 0) {
        return (float)(array[tamanho / 2 - 1] + array[tamanho / 2]) / 2.0;
    } else {
        return array[tamanho / 2];
    }
}

// Função para calcular o desvio padrão dos valores no array
float calcularDesvioPadrao(int array[], int tamanho, float media) {
    float somaQuadrados = 0;
    for (int i = 0; i < tamanho; i++) {
        somaQuadrados += pow(array[i] - media, 2);
    }
    return sqrt(somaQuadrados / tamanho);
}

// Função para criar um novo array contendo valores únicos do array1 na mesma ordem
int criarArrayUnicoNaMesmaOrdem(int array1[], int array2[]) {
    int tamanhoArray2 = 0;

    // Preenche o array2 apenas com valores únicos, mantendo a ordem original
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int valorAtual = array1[i];

        // Verifica se o valor já está presente no array2
        int valorRepetido = 0;
        for (int j = 0; j < tamanhoArray2; j++) {
            if (array2[j] == valorAtual) {
                valorRepetido = 1;
                break;
            }
        }

        // Se o valor não estiver presente, adiciona ao array2
        if (!valorRepetido) {
            array2[tamanhoArray2++] = valorAtual;
        }
    }

    return tamanhoArray2;
}


// Função para contar a quantidade de repetições de cada valor no array
void contarRepeticoes(int array[], int repeticoes[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        repeticoes[array[i]]++;
    }
}

int main() {
    srand(time(NULL));

    int array1[ARRAY_SIZE];
    int array2[ARRAY_SIZE];
    int repeticoes[1001] = {0};  // Inicializa array de repetições com zeros

    preencherArray(array1);

    printf("Array 1:\n");
    imprimirArray(array1, ARRAY_SIZE);

    encontrarMaioresEMenores(array1);

    float mediaArray1 = calcularMedia(array1, ARRAY_SIZE);
    printf("\nMédia do Array 1: %f\n", mediaArray1);

    int arrayOrdenado[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arrayOrdenado[i] = array1[i];
    }

    float medianaArray1 = calcularMediana(arrayOrdenado, ARRAY_SIZE);
    printf("Mediana do Array 1: %f\n", medianaArray1);

    float desvioPadraoArray1 = calcularDesvioPadrao(array1, ARRAY_SIZE, mediaArray1);
    printf("Desvio padrão do Array 1: %f\n", desvioPadraoArray1);

    // Chamada de função para criar array2 com valores únicos na mesma ordem
int tamanhoArray2 = criarArrayUnicoNaMesmaOrdem(array1, array2);


    // Chamada de função para contar repetições
    contarRepeticoes(array1, repeticoes);

    // Imprime a quantidade de repetições para cada valor de 0 a 1000
    for (int i = 0; i <= 1000; i++) {
        printf("O valor %d se repetiu: %d vezes\n", i, repeticoes[i]);
    }

    printf("\nArray 2 (valores únicos em ordem crescente):\n");
    imprimirArray(array2, tamanhoArray2);

    float mediaArray2 = calcularMedia(array2, tamanhoArray2);
    printf("\nMédia do Array 2: %f\n", mediaArray2);

    float medianaArray2 = calcularMediana(array2, tamanhoArray2);
    printf("Mediana do Array 2: %f\n", medianaArray2);

    float desvioPadraoArray2 = calcularDesvioPadrao(array2, tamanhoArray2, mediaArray2);
    printf("Desvio padrão do Array 2: %f\n", desvioPadraoArray2);

    return 0;
}
