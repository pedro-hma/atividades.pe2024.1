#include <stdio.h>

int main() {
    int L, i, j;
    char T;
    double M[12][12], soma = 0.0;
    
    // Entrada de dados
    scanf("%d", &L);
    scanf(" %c", &T);
    
    // Preenchendo a matriz
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    // Calculando a soma ou média
    for (j = 0; j < 12; j++) {
        soma += M[L][j];
    }
    
    // Se for para calcular a média, divide a soma pelo número de elementos
    if (T == 'M') {
        soma /= 12.0;
    }
    
    // Saída do resultado
    printf("%.1lf\n", soma);
    
    return 0;
}
