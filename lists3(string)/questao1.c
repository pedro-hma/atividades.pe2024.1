#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 80

void encrypt(char *sentence);

int main() {
    char sentence[MAX_LENGTH + 1];
    printf("Digite uma frase de no máximo 80 caracteres: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    encrypt(sentence);
    printf("Frase criptografada: %s\n", sentence);   
    return 0;
}

void encrypt(char *sentence) {
    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = tolower(sentence[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            sentence[i] = '*';
        }
    }
}