#include <stdio.h>
#include <string.h>

#define TAMANHO_PALAVRA 15
#define NUM_PALAVRAS 5

// Estrutura para armazenar palavras e suas dicas
typedef struct {
  char palavra[TAMANHO_PALAVRA];
  char dica[100];
} PalavraCruzada;

// Função para preencher a grade com as palavras
void preencherGrade(char grade[][TAMANHO_PALAVRA + 1],
                    PalavraCruzada palavras[], int numPalavras) {
  for (int i = 0; i < numPalavras; i++) {
    int comprimento = strlen(palavras[i].palavra);
    for (int j = 0; j < comprimento; j++) {
      grade[i][j] = '_';
    }
    grade[i][comprimento] = '\0';
  }
}

// Função para exibir a grade com as palavras
void exibirGrade(char grade[][TAMANHO_PALAVRA + 1], PalavraCruzada palavras[],
                 int numPalavras) {
  for (int i = 0; i < numPalavras; i++) {
    printf("%s\t\t%s\n", grade[i], palavras[i].dica);
  }
}

// Função para verificar se a tentativa do usuário está correta
int verificarTentativa(char grade[][TAMANHO_PALAVRA + 1],
                       PalavraCruzada palavras[], int numPalavras,
                       char tentativa[]) {
  for (int i = 0; i < numPalavras; i++) {
    if (strcmp(tentativa, palavras[i].palavra) == 0) {
      int comprimento = strlen(palavras[i].palavra);
      for (int j = 0; j < comprimento; j++) {
        grade[i][j] = palavras[i].palavra[j];
      }
      return 1; // Tentativa correta
    }
  }
  return 0; // Tentativa incorreta
}

int main() {
  PalavraCruzada palavras[NUM_PALAVRAS] = {
      {"cachorro", "Animal de estimação"},
      {"computador", "Máquina que processa dados"},
      {"programacao", "Atividade de desenvolver software"},
      {"honda", "Professor de LP1"},
      {"java", "Tipo de linguagem de programação"}

  };

  char grade[NUM_PALAVRAS][TAMANHO_PALAVRA + 1];

  preencherGrade(grade, palavras, NUM_PALAVRAS);

  printf("jogodaspalavrascruzadas.com.br\n\nNão digite cedilhas ou acentos "
         "(começarão -> comecarao)\n\n");

  while (1) {
    exibirGrade(grade, palavras, NUM_PALAVRAS);

    char tentativa[TAMANHO_PALAVRA];
    printf("\nDigite sua resposta: ");
    scanf("%s", tentativa);

    if (verificarTentativa(grade, palavras, NUM_PALAVRAS, tentativa)) {
      printf("\nParabéns! Sua resposta está correta.\n\n");
    } else {
      printf("\nOps! Sua resposta está incorreta. Tente novamente.\n\n");
    }

    // Verificar se todas as palavras foram preenchidas
    int todasPreenchidas = 1;
    for (int i = 0; i < NUM_PALAVRAS; i++) {
      if (strcmp(grade[i], palavras[i].palavra) != 0) {
        todasPreenchidas = 0;
        break;
      }
    }

    if (todasPreenchidas) {
      printf("\nParabéns! Você completou todas as palavras-cruzadas.\n");
      break;
    }
  }

  return 0;
}
