/*11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
de números.*/
#include <stdio.h>
#include <math.h>
#define TAM 20

int main(){
    float vetor1[TAM],vetor2[TAM];
    for(int i=0;i<TAM;i++){
        printf("Digite o valor real do vetor[%d]: ",i);
        if(scanf("%f",&vetor1[i])!=1){
            printf("Entrada invalida: digite numeros reais!");
            return 0;
        }
        vetor2[i] = pow(vetor1[i],2);
    }

    printf("\nVetor 1: ");
    for(int i=0;i<TAM;i++){
        printf("%0.2f ",vetor1[i]);
    }
    printf("\nVetor 2: ");
    for(int i=0;i<TAM;i++){
        printf("%0.2f ",vetor2[i]);
    }
    printf("\n\n");
    return 0;
}

