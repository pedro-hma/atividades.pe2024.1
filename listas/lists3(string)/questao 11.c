# include <stdio.h>
# include <ctype.h>
# include <math.h>

# define NUMERO_DIGITOS 6

int calcularDigito(int conta);

int main(){
    int conta;
    char digito;

    printf("digite o  numero da sua conta : ");
    scanf("%d",&conta);

    printf("digite o digito - verificador ");
    scanf(" %c",&digito);// o espaço antes do %c serve para ignorar os espaços em branco

    int digitoCalculado = calcularDigito(conta);

    if(digito == 'X'){
        // nesse o 'x' sera convertido para 10
        digito = 10;
    } if(digitoCalculado == (digito - '0')){
        printf("digito verficador válido.\n");
    }else{
        printf("digito verficador inválido.\n");
    }
    return 0;
}
int calcularDigito(int conta){
    int soma = 0;
    for(int i = 0; i < NUMERO_DIGITOS;i++){
        int digito = conta % 10; // pega o ultimo digito
        soma += digito * pow(digito, 2);// eleva o digito ao quadrado
        conta/= 10; // remove o ultimo digito
    }
    int resto = soma % 11;
    int digitoCalculado;
    if(resto < 0 && 9 < resto){ // esta nesse formado porque o simbolo maior que do teclado naõ esdta funcionando
        digitoCalculado =resto;
    } else{
        digitoCalculado = 'X';
    }
    return digitoCalculado;
}