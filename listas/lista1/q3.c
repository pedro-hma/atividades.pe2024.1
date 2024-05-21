#include <stdio.h>
#include <math.h>

#define TAM_VETOR 10

int main() {
  int qtd;
  int a[TAM_VETOR], b[TAM_VETOR], diferenca[TAM_VETOR];
  do {
    printf("Qual o tamanho dos vetores? (valor entre 1 e %d): ", TAM_VETOR);
    scanf("%d", &qtd);
  } while (qtd < 1 || qtd > TAM_VETOR);
  printf("Digitação dos valores do vetor A\n");
  for (int i = 0; i < qtd; ++i) {
    printf("Digite o %dº número : ", i + 1);
    scanf("%d", &a[i]);
  }
  printf("\nDigitação dos valores do vetor B\n");
  for (int i = 0; i < qtd; ++i) {
    printf("Digite o %dº número : ", i + 1);
    scanf("%d", &b[i]);
  }
  // cálculo do vetor interseção
  for (int i = 0; i < qtd; i++){
    diferenca[i] = a[i] - b[i];
  }
  // impressao do vetor diferença
  printf("\nImpressão do vetor diferença \n");
  for (int i = 0; i < qtd; ++i) {
    printf("diferenca[%d] = %d\n", i + 1, diferenca[i]);
  }
  return 0;
}