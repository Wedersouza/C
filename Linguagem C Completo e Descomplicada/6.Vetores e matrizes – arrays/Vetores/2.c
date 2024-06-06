/*2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa*/
#include <stdio.h>
int main(){
    int vetor[6];
    for(int i=0; i<6;i++){
        printf("Digite o valor do numero %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("\n\n");
    for(int i=5;i>=0;i--){
        printf("%d\n",vetor[i]);
    }
    return 0;
}
