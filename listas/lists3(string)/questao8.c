# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(){
    char frase[50];
    char letra;

    printf("digite uma frase : ");
    fgets(frase,sizeof(frase),stdin);

    printf("digite uma letra : ");
    scanf("%c",&letra);

    // converter letra para maiúscula
     letra = toupper(letra);

     int tamanho = strlen(frase);

     // substituir todas as ocorrencias da letra para sua forma maiúscula
     for (int i = 0; i < tamanho ; i++){
        if (frase[i] == letra || frase[i] ==tolower(letra)){
            frase[i] =  letra;
        }       
     }
     // imprimindo a frase alterada 
     printf("Nova frase : %s\n",frase);

     return 0;     
}