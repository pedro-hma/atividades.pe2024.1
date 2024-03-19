#include <stdio.h>
#include <math.h>

#define TAM_VETOR 10

int main() {
  int qtd;
  int a[TAM_VETOR], b[TAM_VETOR], intersecao[TAM_VETOR];
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
  int tamamnhointersecao = 0;
  for (int i = 0; i < qtd; i++){
    printf("\n Vetor Interseção \n:");
    if (tamamnhointersecao == 0){
        printf("\n Nenhum  elemento encontrado \n:");
    }else{
        for (int i = 0; i < tamamnhointersecao; i++){
            printf("Interseção[%d] = %d\n:",i);
        }
    }
    return 0;
  }