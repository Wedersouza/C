/*8) Faça um programa que preencha um vetor com 10 números reais. Em seguida,
calcule e mostre na tela a quantidade de números negativos e a soma dos números
positivos desse vetor.*/
#include <stdio.h>
int main(){
    int soma=0, negativos=0;
    float vetor[10];

    for(int i=0;i<10;i++){
        printf("Digite um valor real pro vetor[%d]",i);
        if(scanf("%f",&vetor[i])!=1){
            printf("\nEntrada invalida: digite valores reais\n");
            return 0;
        }
        if(vetor[i]>0){
            soma += vetor[i];
        }else if(vetor[i]<0){
            negativos++;
        }
    }

    printf("\n\nQuantidade de numeros negativos: %d\nSoma dos numeros positivos: %d\n",negativos,soma);
    return 0;
}
