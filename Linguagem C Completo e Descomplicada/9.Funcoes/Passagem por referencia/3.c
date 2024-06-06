/*3) Escreva uma função que receba um array de 10 elementos e retorne a sua soma.*/
#include <stdio.h>
#include <string.h>
#define TAM 10

int somaArray(int array[]){
    int soma = 0;
    for(int i=0;i<TAM;i++){
        soma += array[i];
    }
    return soma;
}

void leituraArray(int array[]){
    for(int i=0;i<TAM;i++){
        printf("Digite o array[%d]: ",i);
        scanf("%d",&array[i]);
    }

}

int main(){
    int array[TAM];
    leituraArray(array);
    printf("\nSoma: %d\n\n",somaArray(array));
    return 0;
}
