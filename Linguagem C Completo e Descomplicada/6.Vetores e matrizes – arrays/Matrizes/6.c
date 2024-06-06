/*6) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.*/
#include <stdio.h>
#define TAM 3
int main(){
    int matriz[TAM][TAM], soma = 0;

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

    //soma dos valores contido na diagonal da matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i==j){
                soma += matriz[i][j];
            }
        }
    }

    printf("\nSoma dos valores diagonais da matriz: %d\n\n",soma);

    return 0;
}
