/*7) Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.*/
#include <stdio.h>
int main(){
    int X[10], maior,menor;

    for(int i=0; i<10;i++){
        printf("Digite o valor do vetor[%d]: ",i);
        if(scanf("%d",&X[i])!=1){
            printf("Entrada invalida: digite um valor inteiro!");
            return 0;
        }
        if(maior<X[i]||i==0){
            maior = X[i];
        }
        if(menor>X[i]||i==0){
            menor = X[i];
        }
    }

    printf("\n\nMaior numero: %d\nMenor numero: %d\n\n",maior,menor);
    return 0;
}
