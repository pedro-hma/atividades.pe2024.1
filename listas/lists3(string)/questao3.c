#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 80

void cripto(char *frase);

int main() {
    char frase[MAX_LENGTH + 1];
    printf("Digite uma frase de no máximo 80 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Remover o caractere de nova linha adicionado pelo fgets
    frase[strcspn(frase, "\n")] = '\0';
    
    cripto(frase);
    
    printf("Frase criptografada: %s\n", frase);
    
    return 0;
}

void cripto(char *frase) {
    int caracter = strlen(frase);
    // Inverter a frase
    for (int i = 0; i < caracter / 2; i++) {
        char temp = frase[i];
        frase[i] = frase[caracter - 1 - i];
        frase[caracter - 1 - i] = temp;
    }
    for (int i = 0; i < caracter; i++) {
        char c = tolower(frase[i]);
        if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            frase[i] = '#';
        }
    }
}