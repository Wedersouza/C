/*8) Crie uma fun��o que receba dois par�metros: um vetor e um valor do mesmo tipo
do vetor. A fun��o dever� preencher os elementos de vetor com esse valor. N�o
utilize �ndices para percorrer o vetor, apenas aritm�tica de ponteiros.*/
#include <stdio.h>
#define TAM 10
void funcao(int vetor[],int valor){
    for(int i=0;i<TAM;i++){
        *(vetor+i) = valor;
    }
}

int main(){
    int vetor[TAM], valor = 5;
    funcao(vetor,valor);

    for(int i=0; i<TAM; i++){
        printf(" Vetor[%d]: %d\n",i,*(vetor+i));
    }
    return 0;
}
