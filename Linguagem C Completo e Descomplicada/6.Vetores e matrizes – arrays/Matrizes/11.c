/*11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
soma dos elementos dessa matriz que estão acima da diagonal principal.*/
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

    //Soma os elementos acima da diagonal principal
    for(int i=1;i<TAM;i++){
        soma += matriz[i-1][i]; // Acessa diretamente os elementos acima da diagonal principal
    }

    printf("\nSoma dos elementos acima da diagonal principal: %d\n",soma);

    return 0;
}
