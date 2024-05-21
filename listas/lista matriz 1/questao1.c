#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

void imprimirMatriz(int matriz[][COLUNAS], int linhas, int colunas);
void preencherMatriz(int matriz[][COLUNAS], int linhas, int colunas);
void preencherMatrizAleatoria(int matriz[][COLUNAS], int linhas, int colunas);
void somarMatrizes(
  int a[][COLUNAS], int linhas_a, int colunas_a,
  int b[][COLUNAS], int linhas_b, int colunas_b,
  int c[][COLUNAS]);

int main(){
  int linhas_a, colunas_a, linhas_b, colunas_b;
  int a[LINHAS][COLUNAS], b[LINHAS][COLUNAS], c[LINHAS][COLUNAS];

  srand(time(NULL));

  do
  {
    printf("Qual a quantidade de linhas da primeira matriz? (valor entre 1 e %d): ", LINHAS);
    scanf("%d", &linhas_a);
  } while (linhas_a < 1 || linhas_a > LINHAS);

  do {
    printf("Qual a quantidade de colunas da primeira matriz? (valor entre 1 e %d): ", COLUNAS);
    scanf("%d", &colunas_a);
  } while (colunas_a < 1 || colunas_a > COLUNAS);

  preencherMatrizAleatoria(a, linhas_a, colunas_a);

  do
  {
    printf("Qual a quantidade de linhas da segunda matriz? (valor entre 1 e %d): ", LINHAS);
    scanf("%d", &linhas_b);
  } while (linhas_b < 1 || linhas_b > LINHAS);

  do {
    printf("Qual a quantidade de colunas da segunda matriz? (valor entre 1 e %d): ", COLUNAS);
    scanf("%d", &colunas_b);
  } while (colunas_b < 1 || colunas_b > COLUNAS);

  preencherMatrizAleatoria(b, linhas_b, colunas_b);

  printf("\nMATRIZ A\n");
  imprimirMatriz(a, linhas_a, colunas_a);
  printf("\nMATRIZ B\n");
  imprimirMatriz(b, linhas_b, colunas_b);

   somarMatrizes(
      a, linhas_a, colunas_a,
      b, linhas_b, colunas_b,
      c);
       printf("\nMATRIZ C\n");
  imprimirMatriz(c, linhas_a, colunas_b);

  return 0;
}
void imprimirMatriz(int matriz[][COLUNAS], int linhas, int colunas) {
  for (int i = 0; i < linhas; ++i) {
    for (int j = 0; j < colunas; ++j) {
      printf("%4d ", matriz[i][j]);
    }
    printf("\n");
  }
}
void preencherMatriz(int matriz[][COLUNAS], int linhas, int colunas) {
  printf("Digite os valores para preencher a matriz\n");
  for (int i = 0; i < linhas; ++i)
  {
    for (int j = 0; j < colunas; ++j) {
      printf("matriz[%d][%d] = ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }
}
void preencherMatrizAleatoria(int matriz[][COLUNAS], int linhas, int colunas) {
  for (int i = 0; i < linhas; ++i) {
    for (int j = 0; j < colunas; ++j) {
      matriz[i][j] = rand() % (2 * linhas * colunas) + 1;
    }
  }
}
 void somarMatrizes(
  int a[][COLUNAS], int linhas_a, int colunas_a,
  int b[][COLUNAS], int linhas_b, int colunas_b,
  int c[][COLUNAS])
  {
    if(colunas_a != linhas_b) {
    printf("ERRO: Não é possível somar essas matrizes!\n");
    return;
     for (int i = 0; i < linhas_a; ++i) {
    for (int j = 0; j < colunas_b; ++j) {
      c[i][j] = 0;
      for (int k = 0; k < colunas_b; ++k) {
        c[i][j] += a[i][k] * b[k][j];
                }
            }
         }
    }
}