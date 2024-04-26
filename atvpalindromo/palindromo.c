// ultilizando duas funções seperadas
# include <stdio.h>
# include <string.h>
# include <ctype.h>

// função para remover os espaços em branco
void removerEspacos(char *str){
    int i = 0, j =0;
    for(i = 0 ; str[i];i++){
        if(!isspace (str[i])){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
// Função para verificar se a string é um palindromo
int palindromo(char * str){
    int i, tamanho;
    char reverte[100];

    // remover os espaços em branco
    removerEspacos(str);

    tamanho = strlen(str);

    // o for abaixo ira reverter string
    for(i = 0;i < tamanho;i++){
        reverte[i] = str[tamanho - i -1];
    }
    reverte[tamanho]='\0';
    // comparando a string original com a sua inversa
    return strcmp(str,reverte) == 0;
}
int main(){
    char frase [100];
    printf("digite uma frase : ");
    fgets(frase,sizeof(frase),stdin);
    // verficar palindromo
    if(palindromo(frase)){
        printf("A frase é um palindromo \n.");
    }else{
         printf("A frase não é um palindromo \n.");
    }
}