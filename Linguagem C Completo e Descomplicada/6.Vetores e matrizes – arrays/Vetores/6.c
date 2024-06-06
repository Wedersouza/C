/*6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.*/
#include <stdio.h>
int main(){
    int vetor[10], pares=0;

    for(int i=0; i<10;i++){
        printf("Digite o valor do vetor[%d]: ",i);
        if(scanf("%d",&vetor[i])!=1){
            printf("\nEntrada invalida: digite numeros inteiros!\n");
            return 0;
        }

        if(vetor[i]%2==0){
            pares++;
        }
    }

    printf("\nQuantidade de valores pares: %d\n",pares);
    return 0;
}
