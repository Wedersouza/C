/* 4) Crie um programa que contenha uma matriz de float contendo três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.*/
#include <stdio.h>
#define TAM 3

int main(){
    float matriz[TAM][TAM];
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("Endereco da posicao linha %d e coluna %d: %p\n",i+1,j+1,*(matriz + i) + j);
        }
        printf("\n");
    }
    return 0;
}
