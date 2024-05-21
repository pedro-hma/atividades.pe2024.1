#include <stdio.h>

int main() {
    int N, i, j;
    while (scanf("%d", &N) != EOF) {
        int matriz[N][N];
        
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (i == j) {
                    matriz[i][j] = 1;
                } else if (i + j == N - 1) {
                    matriz[i][j] = 2;
                } else {
                    matriz[i][j] = 3;
                }
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("%d ", matriz[i][j]); // Adicionando um espaço após cada elemento
            }
            printf("\n");
        }
    }
    return 0;
}
