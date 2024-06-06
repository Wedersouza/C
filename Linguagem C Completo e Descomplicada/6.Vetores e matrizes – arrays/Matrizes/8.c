/*8) Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são da forma:
A[i][j] = 2i + 7j – 2 se i < j
A[i][j] = 3i^2 – 1 se i = j
A[i][j] = 4i^3 + 5j^2 + 1 se i > j*/

#include <stdio.h>
#include <math.h>
#define TAM 10

int main(){
    int A[TAM][TAM];

    //Atribui os respectivos valores na matriz
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i<j){
                A[i][j]=((i*2)+(j*7)-2);
            }else if(i==j){
                A[i][j]=(pow(i,2)*3-1);
            }else{
                A[i][j]=(pow(i,3)*4+pow(j,2)*5+1);
            }
        }
    }

    //Saida dos valores da matriz
    printf("\t\t Matriz %dx%d\n\n",TAM,TAM);
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
                printf("%5d",A[i][j]);
        }
        printf("\n\n");
    }

}
