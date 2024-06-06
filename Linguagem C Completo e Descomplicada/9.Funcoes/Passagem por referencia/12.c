/*12) Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. Essa função deve retornar, por referência, dois valores: a soma dos números
pares e ímpares*/
#include <stdio.h>
#define TAM 3
void somas(int vetor[], int *soma_impares,int *soma_pares){
    for(int i=0;i<TAM;i++){
        if(vetor[i]%2==0){
            *soma_pares += vetor[i];
        }else{
            *soma_impares += vetor[i];
        }
    }
}

void leituraVetor(int v[]){
    for(int i=0;i<TAM;i++){
        printf("Digite o valor do vetor[%d]: ",i);
        scanf("%d",&v[i]);
    }
}
int main(){
    int v[TAM],par=0,impar=0;
    leituraVetor(v);
    somas(v,&impar,&par);
    printf("\nSomas dos numeros\nPares: %d\nImpares: %d\n",par,impar);
}
