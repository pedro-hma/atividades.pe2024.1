#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 80

void encrypt(char *sentence);

int main() {
    char sentence[MAX_LENGTH + 1]; // +1 for null terminator
    printf("Digite uma frase de no máximo 80 caracteres: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remover o caractere de nova linha adicionado pelo fgets
    sentence[strcspn(sentence, "\n")] = '\0';
    
    encrypt(sentence);
    
    printf("Frase criptografada: %s\n", sentence);
    
    return 0;
}

void encrypt(char *sentence) {
    int length = strlen(sentence);
    // Inverter a frase
    for (int i = 0; i < length / 2; i++) {
        char temp = sentence[i];
        sentence[i] = sentence[length - 1 - i];
        sentence[length - 1 - i] = temp;
    }
    for (int i = 0; i < length; i++) {
        char c = tolower(sentence[i]);
        if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            sentence[i] = '#';
        }
    }
}