/*8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/
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
