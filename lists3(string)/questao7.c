# include <stdio.h>
# include <string.h>
# include <ctype.h>

#define MAX_LENGTH 50 

// declarando um função de concatanação
int main(){
    char frase1[MAX_LENGTH + 1];
    printf("Digite uma frase1 de no máximo 50 caracteres: ");
    fgets(frase1, sizeof(frase1), stdin);
    
    // Remover o caractere de nova linha adicionado pelo fgets
    frase1[strcspn(frase1, "\n")] = '\0';
    
    int c = qtdcaracter(frase1);

    char frase2[MAX_LENGTH + 1];
    printf("Digite uma frase de no máximo 50 caracteres: ");
    fgets(frase2, sizeof(frase2), stdin);
    
    printf("Concatenação das frases 1 e 2: %d\n",frase1,frase2);
    
    return 0;
}
// definindo a função de concatenação
