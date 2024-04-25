# include <stdio.h>
# include <string.h>
# include <ctype.h>

#define MAX_LENGTH 50 

// declarando um função de palindromo
int palindromo(char *frase);

int main(){
    char frase [MAX_LENGTH+1];
    printf("digite uma frase");
    fgets(frase,sizeof(frase),stdin);

    frase[strcspn(frase,"\n")]="\0";

    int aux = palindromo(frase);

    return 0;

}
int palindromo(char * frase){

}
