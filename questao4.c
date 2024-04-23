#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_VOGAIS 50

int count_vowels(char *frase);

int main() {
    char frase[MAX_VOGAIS + 1]; // +1 for null terminator
    printf("Digite uma frase de no máximo 50 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Remover o caractere de nova linha adicionado pelo fgets
    frase[strcspn(frase, "\n")] = '\0';
    
    int vogais = qtd_vogais(frase);
    
    printf("A quantidade de vogais na frase é: %d\n", vogais);
    
    return 0;
}
int count_vowels(char *frase) {
    int qtd = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            qtd++;
        }
    }
    return qtd;
}