/*3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.*/
#include <stdio.h>
int main(){
    int vetor[5], soma = 0;
    float media;

    for(int i=0; i<5; i++){
        printf("Digite o numero %d: ",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("\n\nValores lidos: ");
    for(int i=0;i<5;i++){
        printf("%d ",vetor[i]);
        soma += vetor[i];
    }
    media = soma/5.0;

    printf("\nMedia: %0.2f",media);

    return 0;
}
