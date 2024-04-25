# include <stdio.h>
# include <string.h>
# include <ctype.h>

#define MAX_LENGTH 50 

int qtdConsoantes(char * frase);

int main(){
    char frase[MAX_LENGTH + 1];
    printf("Digite uma frase de no máximo 50 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Remover o caractere de nova linha adicionado pelo fgets
    frase[strcspn(frase, "\n")] = '\0';
    
    int c = qtdConsoantes(frase);
    
    printf("A quantidade de consoantes na frase é: %d\n", c);
    
    return 0;
}