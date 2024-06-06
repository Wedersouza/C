/*14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores*/
#include <stdio.h>
#define TAM 5
int main(){
    int matriz[TAM][TAM],soma1=0,soma2=0;

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

    //Soma dos elementos pertencem e que nao pertencem diagonal principal ou secundaria
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(!(j==i||j==i+1)){
                soma1 += matriz[i][j];
            }else{
                soma2 += matriz[i][j];
            }
        }
    }

    printf("\nDiferenca entre a soma da diagonal principal e secundaria com a soma do resto: %d\n\n",soma1-soma2);
    return 0;
}
