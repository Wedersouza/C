/* 9) Crie uma fun��o que receba como par�metro um vetor e o imprima. N�o utilize
�ndices para percorrer o vetor, apenas aritm�tica de ponteiros.*/
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
