/* 3) Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array*/
#include <stdio.h>
#define TAM 10

int main(){
    float array[TAM];

    for(int i=0; i<TAM; i++){
        printf("Endereco da posicao %d: %p\n",i+1,array+i);
    }
    return 0;
}
