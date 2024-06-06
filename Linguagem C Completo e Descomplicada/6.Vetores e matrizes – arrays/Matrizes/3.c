/*/3) Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida
na tela.*/
#include <stdio.h>
#define TAM 5
int main(){
    int matriz[TAM][TAM];

    //Atribui os respectivos valores na matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i==j){
                //diagonal principal
                matriz[i][j] = 1;
            }else{
                //outras diagonais
                matriz[i][j] = 0;
            }
        }
    }


    //Saida dos valores da matriz
    printf("\t Matriz %dx%d\n\n",TAM,TAM);
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
                printf("%5d",matriz[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}
