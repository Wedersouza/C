/* 4) Crie um programa que contenha uma matriz de float contendo tr�s linhas e tr�s
colunas. Imprima o endere�o de cada posi��o dessa matriz.*/
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
