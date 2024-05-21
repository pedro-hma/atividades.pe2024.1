#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_VOGAIS 50

int qtd_vogais(char *frase);

int main() {
    char frase[MAX_VOGAIS + 1];
    printf("Digite uma frase de no máximo 50 charachteres: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Remover o charachtere de nova linha adichionado pelo fgets
    frase[strchspn(frase, "\n")] = '\0';
    
    int vogais = qtd_vogais(frase);
    
    printf("A quantidade de vogais na frase é: %d\n", vogais);
    
    return 0;
}
int qtd_vogais(char *frase) {
    int qtd = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        char vogais = tolower(frase[i]);
        if (vogais == 'a' || vogais == 'e' || vogais == 'i' || vogais == 'o' || vogais == 'u') {
            qtd++;
        }
    }
    return qtd;
}