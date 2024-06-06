/*Quest�o 1. Ler valores inteiros para a matriz A3�5. Gerar e imprimir a matriz (vetor) SL (soma das 3 linhas), onde cada elemento � a soma dos elementos de uma linha da matriz A.
Fa�a o trecho que gera a matriz SL separado (la�os de repeti��o) da entrada e da sa�da de dados.*/
#include <stdio.h>
#define L 3
#define C 5

void leituraMatriz(int A[][C]){
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
}

void gerarVetor(int SL[],int A[][C]){
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            SL[i] += A[i][j];
        }
    }
}

void imprimirVetor(int SL[]){
    for(int i=0; i<L; i++){
        printf("Vetor[%d]: %d\n",i,SL[i]);
    }
}


int main(){
    int A[L][C], SL[L] = {0};
    leituraMatriz(A);
    gerarVetor(SL,A);
    imprimirVetor(SL);
}
