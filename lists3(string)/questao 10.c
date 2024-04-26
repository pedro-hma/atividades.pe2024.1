# include <stdio.h>
# include <string.h>
# include <ctype.h>

# define MAX_LENGTH 120

int contarPalavras(char *frase);

int main(){
    char frase [MAX_LENGTH + 1];
    printf("digite uma frase : ");
    fgets(frase,sizeof(frase),stdin);

    frase[strcspn(frase,"\n")] = '\0';
    int palavra = contarPalavras(frase);
    printf("Quantidade de palavras na frase é : %d\n",palavra);

    return 0;
}
int contarPalavras(char *frase){
    int qtd = 0;
    int contador = 0;
    for(int i = 0; frase[i] !='\0'; i++){
        if (isspace(frase[i]) || frase[i] == '.'|| frase[i] == ','){
            if(contador){
                qtd++;
                contador = 0;// reinicia o contador
            }
        }else{
            contador = 1;// para quando a palavra for digitada
            }
        }
         // se a frase tiver apenas uma palavra
            if(contador){
                qtd++;// incremento a quantidade
            }
        
        return qtd;
 }