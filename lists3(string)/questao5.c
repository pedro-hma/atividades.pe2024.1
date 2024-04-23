# include <stdio.h>
# include <string.h>
# include <ctype.h>

# define MAX_CONS

int qtdCons(char * frase);

int main(){
    char frase [MAX_CONS + 1];
    printf("digite uma frase com no máximo 50 caracteres");
    fgets(frase,sizeof(frase),stdin);

    // remover o caractere de quebra de linha implentado no fgets
    frase[strcspn(frase,"\n")] = "\0";
    // declaração das variaveis
    int c = qtdCons(frase);
    print("A quantidade de consoantes na frase é :%d\n",c);

    return 0;
}
int qtdCons(char * frase){
    int qtd;
        for(int i ; frase[i] != '\0';i++){
            char c = tolower(frase[i]);
            if (c !='a'||c !='A'||c !='e'||c !='E'||c !='i'||c !='I'||c !='o'||c !='O'||c !='u'||c !='U'){
                qtd++;
            }
        }
        return qtd++;
}