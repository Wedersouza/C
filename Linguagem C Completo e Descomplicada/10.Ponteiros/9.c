/* 9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/
#include <stdio.h>
#define TAM 10
#include <stdlib.h>
void Imprima(int *vetor){
        for(int i=0; i<TAM; i++){
            printf("Vetor[%d]: %d\n",i,*(vetor+i));
        }
}

int main(){
    int vetor[] = {2,3,4,5,7,3,6,5,7,2};
    Imprima(vetor);
    return 0;
}
