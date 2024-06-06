/* 8) Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas
e seis colunas. Essa função deve retornar, por referência, a soma dos elementos da
sua diagonal principal e da sua diagonal secundária.*/
#include <stdio.h>
#define TAM 6
void somaDiagonais(int m[][TAM],int *somaD1,int *somaD2){
    for(int i=0; i<TAM; i++){
        for(int j=0;j<TAM;j++){
            if(j==i){
                *somaD1 += m[i][j];
            }
            if(j+i == TAM - 1){
                *somaD2 += m[i][j];
            }
        }
    }
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
    printf("\n");
}

int main(){
    int m[TAM][TAM], d1=0,d2=0;
    leituraMatriz(m);
    somaDiagonais(m,&d1,&d2);
    imprimaMatriz(m);
    printf("Soma\nd1 %d\nd2 %d\n\n",d1,d2);
}
