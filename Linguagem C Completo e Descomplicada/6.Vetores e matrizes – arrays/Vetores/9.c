/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
do array C.*/
#include <stdio.h>
int main(){
    int A[10],B[10],C[10];

    for(int i=0;i<10;i++){
        printf("Digite o valor de A[%d]: ",i);
        if(scanf("%d",&A[i])!=1){
            printf("Entrada de dados invalida!");
            return 0;
        }
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("Digite o valor de B[%d]: ",i);
        if(scanf("%d",&B[i])!=1){
            printf("Entrada de dados invalida!");
            return 0;
        }
    }
    printf("\n");
    for(int i=0;i<10;i++){
        C[i] = A[i] - B[i];
        printf("Valor do vetor C[%d]: %d\n",i,C[i]);
    }

    return 0;
}
