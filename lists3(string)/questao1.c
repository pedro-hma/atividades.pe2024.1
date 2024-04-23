#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 80

void cripto(char *frase);

int main() {
    char frase[MAX_LENGTH + 1];
    printf("Digite uma frase de no máximo 80 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    cripto(frase);
    printf("Frase criptografada: %s\n", frase);   
    return 0;
}

void cripto(char *frase) {
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            frase[i] = '*';
        }
    }
}