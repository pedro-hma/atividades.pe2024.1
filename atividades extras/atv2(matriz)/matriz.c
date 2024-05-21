#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

# define LINHAS 10
# define COLUNAS 10

void imprimirmatriz(int matriz [][COLUNAS],int linhas,int colunas);
void preenchermatriz(int matriz [][COLUNAS],int linhas,int colunas);
void matrizAleatoria(int matriz [][COLUNAS],int linhas,int colunas);
void calcularTotal(int matriz [][COLUNAS],int linhas,int colunas);

int main(){
    int linhas,colunas;
    int matriz [LINHAS] [COLUNAS]
    int total [COLUNAS] ={0};

    srand(time(NUUL));

    do{
        printf("Quantidade de linhas",LINHAS);
        scanf("%d",&linhas);
    }while(linhas < 1 || linhas > LINHAS );
    do{
        printf("Quantidade de colunas",LINHAS);
        scanf("%d",&linhas);
    }while(colunas < 1 || colunas > COLUNAS );

    preenchermatriz(matriz,linhas,colunas);
    calcularTotal(matriz,linhas,colunas,total)
    imprimirmatriz(matriz,linhas,colunas);

    printf("\nTotal das colunas :\n");
    for(int i = 0; i < colunas; i++){
        printf("%d",total[i];)
    }
    return 0;
}

void imprimirmatriz(int matriz [][COLUNAS], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("%4d",matriz [i][j];)
        }
        printf("\n");
    }
}

void preenchermatriz (int matriz[][ COLUNAS],int linhas,int colunas){
    printf("Digite os valores da matriz");
        for(int i = 0; i < linhas;i++){
             for (j = 0; j < colunas; j++){
            printf("matriz[%d][%d]",i + 1, j + 1);
            scanf("%d",&matriz[i][j]);
            }
        }
}

void matrizAleatoria(int matriz[][ COLUNAS],int linhas,int colunas){
    for(int i = 0; i < linhas;i++){
             for (j = 0; j < colunas; j++){
                matriz [i][j] rand() % (2*linhas*colunas);
            }
        }
}

void calcularTotal (int matriz[][ COLUNAS],int linhas,int colunas){
    for(int j = 0; j < colunas;j++){
             for (i = 0; i < linhas; j++){
                total [j] = total[j] + matriz[i][j]
            }
        }
}