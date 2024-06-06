/*7) Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas e
retorne a soma dos seus elementos*/
#include <stdio.h>
#define TAM 10
int somaMatriz(int m[][TAM]){
    int soma = 0;
    for(int i=0; i<TAM;i++){
        for(int j=0;j<TAM;j++){
            soma += m[i][j];
        }
    }
    return soma;
}

void leituraMatriz(int m[][TAM]){
    for(int i=0; i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o valor da matriz[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

int main(){
    int m[TAM][TAM];

    leituraMatriz(m);
    printf("\nSoma: %d",somaMatriz(m));
    return 0;
}
