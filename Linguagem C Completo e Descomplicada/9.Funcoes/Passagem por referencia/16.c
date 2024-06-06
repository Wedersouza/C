/*16) Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior elemento do vetor e o número de vezes que esse elemento ocorreu
no vetor.*/
#include <stdio.h>
#define TAM 5

void comparacao(int v[],int *maior, int *vezes){
    *maior = v[0];
    *vezes = 1;

    for(int i=1; i<TAM; i++){
        if(v[i]>*maior){
            *maior = v[i];
            *vezes = 1;
        }else if(v[i]==*maior){
            (*vezes)++;

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
    int v[TAM],maior,vezes;
    leituraVetor(v);
    comparacao(v,&maior,&vezes);
    printf("Maior: %d\nQuantidade: %d",maior,vezes);
    return 0;
}
