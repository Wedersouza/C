/*9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
× 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array. Por exemplo, a matriz
5 −8 10
1 2 15
25 10 7
deverá gerar o vetor 31 4 32*/

#include <stdio.h>
#define TAM 3
int main(){
    int matriz[TAM][TAM], vetor[TAM]={0};

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


    //Soma das colunas da matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            vetor[j] += matriz[i][j];
        }
    }


    //Saida dos valores do vetor
    printf("\n\nSoma das colunas\n");
    for(int i=0;i<TAM;i++){
        printf("Coluna %d: %d \n",i+1,vetor[i]);
    }

    return 0;
}
