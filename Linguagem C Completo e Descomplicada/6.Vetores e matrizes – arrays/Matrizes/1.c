/*1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz.*/
#include <stdio.h>
#define TAM 3
int main(){
    int matriz[TAM][TAM],menor;

    //Entrada e validação de dados da matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(scanf("%d",&matriz[i][j])!=1){
                printf("Entrada invalida!");
                return 1;
            }
            if(i==0||menor>matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }

    //Encontra o menor valor da matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i==0||menor>matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }

    printf("\nMenor valor lido: %d",menor);

    return 0;
}
