/*13) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
soma dos elementos dessa matriz que não pertencem à diagonal principal nem à
diagonal secundária.*/
#include <stdio.h>
#define TAM 5
int main(){
    int matriz[TAM][TAM],soma=0;
    //Entrada e validação de dados na matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o valor da matriz[%d][%d]: ",i,j);
            if(scanf("%d",&matriz[i][j])!=1){
                printf("Entrada invalida!");
                return 1;
            }
        }
    }

    //Soma os elementos que nao pertencem a diagonal principal e nem a secundaria
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(!(j==i||j==i+1)){
                soma += matriz[i][j];
            }
        }
    }

    printf("\nSoma dos elementos que nao pertencem a diagonal principal e secundaria: %d\n",soma);


    return 0;
}
