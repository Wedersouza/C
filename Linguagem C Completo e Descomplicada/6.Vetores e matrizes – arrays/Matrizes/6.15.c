/*15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
e imprima a matriz B, sendo que B = A2.*/
#include <stdio.h>
#define TAM 5
#include <math.h>
int main(){
    int A[TAM][TAM],B[TAM][TAM],soma1=0,soma2=0;

    //Entrada e validação de dados na matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o valor da matriz[%d][%d]: ",i,j);
            if(scanf("%d",&A[i][j])!=1){
                printf("Entrada invalida!");
                return 1;
            }
        }
    }

    //Calculo da matriz B
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            B[i][j]=pow(A[i][j],2);
        }
    }


    //Saida dos valores da matriz
    printf("\n\n\t Matriz %dx%d\n\n",TAM,TAM);
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
                printf("%5d",B[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
