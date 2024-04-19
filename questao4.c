#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 50

int count_vowels(char *sentence);

int main() {
    char sentence[MAX_LENGTH + 1]; // +1 for null terminator
    printf("Digite uma frase de no máximo 50 caracteres: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remover o caractere de nova linha adicionado pelo fgets
    sentence[strcspn(sentence, "\n")] = '\0';
    
    int vowels = count_vowels(sentence);
    
    printf("A quantidade de vogais na frase é: %d\n", vowels);
    
    return 0;
}
int count_vowels(char *sentence) {
    int count = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = tolower(sentence[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}