/*13) Crie uma função que receba um vetor de tamanho N e ordene os seus valores.*/
#include <stdio.h>
#define TAM 5

void ordenarVetor(int v[]){
    int aux;
    for(int i=0;i<TAM;i++){
        for(int j=i+1; j<TAM; j++){
            if(v[j]<v[i]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void leituraVetor(int v[]){
    for(int i=0;i<TAM;i++){
        printf("Digite o valor do vetor[%d]: ",i);
        scanf("%d",&v[i]);
    }
}

void imprimirVetor(int v[]){
    printf("\nVetor: ");
    for(int i=0;i<TAM;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main(){
    int v[TAM];
    leituraVetor(v);
    imprimirVetor(v);
    ordenarVetor(v);
    imprimirVetor(v);


}
