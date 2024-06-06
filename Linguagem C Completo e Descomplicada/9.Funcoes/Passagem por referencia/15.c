/*15) Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior e o menor elemento desse vetor.*/
#include <stdio.h>
#define TAM 5

void comparacao(int v[],int *maior, int *menor){
    *maior = v[0];
    *menor = v[0];
    for(int i=1; i<TAM; i++){
        if(v[i]>*maior){
            *maior = v[i];
        }
        if(v[i]<*menor){
            *menor = v[i];
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
    int v[TAM],maior,menor;
    leituraVetor(v);
    comparacao(v,&maior,&menor);
    printf("Maior: %d\nMenor: %d",maior,menor);
    return 0;
}
