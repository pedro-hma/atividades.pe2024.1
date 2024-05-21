# include <stdio.h>
# include <string.h>
# include <ctype.h>

# define MAX_LENGTH 100

void contarCaracter(char *frase,int *letra,int *digito,int *simbolo);

int main(){
    char frase[MAX_LENGTH +1];
    printf("digite uma frase : \n");
    fgets(frase,sizeof(frase),stdin);

    frase[strcspn(frase,"\n")] = '\0';

    int letras = 0, digito = 0, simbolo = 0;
    contarCaracter(frase,&letras,&digito,&simbolo);

    printf("Quantidade de letras na frase :%d\n",letras);
    printf("Quantidade de digitos na frase :%d\n",digito);
    printf("Quantidade de simbolos na frase :%d\n",simbolo);

    return 0;
}
void contarCaracter(char *frase,int *letra,int *digito,int *simbolo){
    for (int i = 0; frase[i] != '\0'; i++){
        if(isalpha(frase[i])){
            (*letra)++;
        }else if(isdigit(frase[i])){
            (*digito)++;
        }else{
            (*simbolo);
        }
    }
    
}