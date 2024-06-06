/*1) Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.*/
#include <stdio.h>
int main(){
    int vetor[6];
    for(int i=0;i<6;i++){
        printf("Digite o valor do numero %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("\n\n");
    for(int i=0;i<6;i++){
        printf("O valor do numero %d: %d\n",i+1,vetor[i]);
    }

    return 0;
}
