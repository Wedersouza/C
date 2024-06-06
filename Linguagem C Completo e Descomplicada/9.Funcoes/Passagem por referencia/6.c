/*6) Crie uma fun��o que receba uma matriz A contendo cinco linhas e cinco colunas.
Calcule na pr�pria matriz A a sua transposta (se B � a matriz transposta de A,
ent�o A[i][j] = B[j][i]).*/
#include <stdio.h>
#define TAM 5
void matriz(int A[][TAM]){
    int aux;
    // Fun��o para calcular a transposta da matriz na pr�pria matriz A
    for(int i=0; i<TAM; i++){
        for(int j=i+1;j<TAM;j++){
            aux = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = aux;
        }
    }

    return;
}
void leituraMatriz(int m[][TAM]){
    for(int i=0; i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o valor da matriz[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
void imprimaMatriz(int m[][TAM]){
    printf("\nmatriz\n\n");
    for(int i=0; i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int A[TAM][TAM];
    leituraMatriz(A);
    imprimaMatriz(A);
    matriz(A);
    imprimaMatriz(A);
    return 0;
}
