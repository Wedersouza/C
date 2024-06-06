/*5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores negativos ela possui.*/
#include <stdio.h>
#define TAM 4
int main(){
    int matriz[TAM][TAM], valores_negativos = 0;

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
    //Verifica quais numeros são os negativos
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(matriz[i][j]<0){
                valores_negativos++;
            }
        }
    }

    printf("\nQuantidade de numeros negativos da matriz: %d\n\n",valores_negativos);
    return 0;
}
