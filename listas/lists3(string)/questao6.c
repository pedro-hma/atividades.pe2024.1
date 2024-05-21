# include <stdio.h>
# include <string.h>
# include <ctype.h>

#define MAX_LENGTH 100 

int qtdcaracter(char * frase);

int main(){
    char frase[MAX_LENGTH + 1];
    printf("Digite uma frase de no máximo 100 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Remover o caractere de nova linha adicionado pelo fgets
    frase[strcspn(frase, "\n")] = '\0';
    
    int c = qtdcaracter(frase);
    
    printf("A quantidade de consoantes na frase é: %d\n", c);
    
    return 0;
}
int qtdcaracter(char *frase) {
    int qtd = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a') {// ficar alterando aqui
            qtd++;
        }
    }
    return qtd;
}