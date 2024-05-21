#include <stdio.h>
#include <string.h>

#define MAX_caracter 100

void cripoto(char *frase);

int main() {
    char frase[MAX_caracter + 1];
    printf("Digite uma frase de no máximo 100 caracteres: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    cripoto(frase);
    
    printf("Frase invertida: %s\n", frase);
    
    return 0;
}

void cripoto(char *frase) {
    int caracter = strlen(frase);
    for (int i = 0; i < caracter / 2; i++) {
        char temp = frase[i];
        frase[i] = frase[caracter - 1 - i];
        frase[caracter - 1 - i] = temp;
    }
}