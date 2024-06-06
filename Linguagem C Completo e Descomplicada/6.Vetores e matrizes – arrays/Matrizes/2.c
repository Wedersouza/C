/*2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).*/
#include <stdio.h>
#define TAM 4
int main(){
    int matriz[TAM][TAM],maior,l,c;

    //Entrada e validação de dados da matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o valor da matriz[%d][%d]: ",i,j);
            if(scanf("%d",&matriz[i][j])!=1){
                printf("Entrada invalida!");
                return 1;
            }
        }


    }

    //Encontra o maior valor e sua posição na matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(maior<matriz[i][j] || ((i==0)&&(j==0))){
                maior = matriz[i][j];
                l = i;
                c = j;
            }
        }
    }

     printf("\n\nMaior valor lido: %d\nPosicao: linha %d e coluna %d\n",maior,l,c);
    return 0;
}
