/*15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.*/
#include <stdio.h>
#define TAM 10
int main(){
    float vetor[TAM],aux;

    for(int i=0;i<TAM;i++){
        //Entrada e validação dos dados
        printf("Digite o valor do vetor[%d]: ",i);
        if(scanf("%f",&vetor[i])!=1){
            printf("Entrada de dados invalido!");
            return 1;
        }

        //Ordenação do vetor conforme o usuário insere os elementos
        for(int j=0;j<i&&i>0;j++){
            if(vetor[i]<vetor[j]){
                // Troca os elementos se estiverem fora de ordem
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }

    }

    // Impressão do vetor ordenado
    printf("\n");
    for(int i=0;i<TAM;i++){
        printf("vetor[%d]: %0.2f\n",i,vetor[i]);
    }

    return 0;
}
