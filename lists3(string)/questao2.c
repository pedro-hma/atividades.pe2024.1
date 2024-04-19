#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void encrypt(char *sentence);

int main() {
    char sentence[MAX_LENGTH + 1];
    printf("Digite uma frase de no máximo 100 caracteres: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    encrypt(sentence);
    
    printf("Frase invertida: %s\n", sentence);
    
    return 0;
}

void encrypt(char *sentence) {
    int length = strlen(sentence);
    for (int i = 0; i < length / 2; i++) {
        char temp = sentence[i];
        sentence[i] = sentence[length - 1 - i];
        sentence[length - 1 - i] = temp;
    }
}