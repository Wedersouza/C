/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
valores e apresente o resultado na tela.*/
#include <stdio.h>
int main(){
    int soma = 0,aux;

    for(int i=1; i<=10; i++){
        printf("Digite o valor %d: ",i);
        scanf("%d",&aux);
        soma += aux;
    }
    printf("\nSoma de todos valores: %d\n",soma);
    return 0;
}
