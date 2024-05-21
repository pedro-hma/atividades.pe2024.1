# include <stdio.h>
# include <stdlib.h>

   void calcularMedia(double notas[],double pesos,double media[],int qtdAlunos,int qtdNotas){
    double *somaPesos = 0;
    for(int i = 0; i < qtdNotas;i++){
        //somaPesos += pesos[i];
    }
    for (int i = 0; i < qtdNotas;){
        //media[i] = (notas[i]*pesos[i])/somaPesos[i];
    }
}
int main(){
    int qtdNotas;
    printf("Digite a quantidade de notas :");
    scanf("%d",&qtdNotas);

    double notas[qtdNotas];
    double pesos[qtdNotas];
    double media[qtdNotas];

    printf("Digite as %d notas:\n",qtdNotas);
    for(int i = 0; i <qtdNotas;i++){
        printf("Nota %d: ",i+1);
        scanf("%lf",&notas[i]);
    }
    printf("Digite os pesos correspondentes:\n");
    for (int i = 0; i < qtdNotas;i++){
        printf("Pesos %d:",i+1);
        scanf("lf",&pesos);
    }
    printf("\n");
    return 0;
}