/*4) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores maiores do que 10 ela possui.*/
#include <stdio.h>
#define TAM 4
int main(){
    int matriz[TAM][TAM], numeros_maiores = 0;

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

    //Verifica quais são os valores maiores que 10 na matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(matriz[i][j]>10){
                numeros_maiores++;
            }
        }
    }
    printf("\nQuantidade de valores maiores que 10: %d\n\n",numeros_maiores);
    return 0;
}
