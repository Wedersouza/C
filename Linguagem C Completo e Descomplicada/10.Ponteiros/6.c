/*6) Crie um programa que contenha um array contendo cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores
pares.
*/
#include <stdio.h>
#define TAM 5
int main(){
    int array[TAM];

    for(int i=0; i<TAM; i++){
        //Entrada e validação de dados
        printf("Digite o valor %d: ",i+1);
        if(scanf("%d",array+i) !=1){
            printf("Entrada invalida!\n");
            return 1;
        }
    }
    printf("\n");

    for(int i=0; i<TAM; i++){
        if((*(array)+i)%2==0){
            printf("Endereco da posicao %d: %d\n",i+1,*(array+i);
        }
    }
    return 0;
}
