/*7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal secundária.*/
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

    //Soma dos valores contido na diagonal secundaria da matriz
    for(int i=0;i<TAM-1;i++){
        soma += matriz[i][i+1];

        /*acessamos as linhas diretamente e a coluna da diagonal secundária atráves da linha atual,
        sem a necessidade de percorrer todos os elementos da matriz.*/
    }

    printf("\nSoma dos valores da diagonal secundaria da matriz: %d\n\n",soma);


    return 0;
}
