/*14) Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.*/
#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    if((n%3==0 || n%5==0)&&!(n%3==0 && n%5==0)){
        printf("Numero valido\n");
    } else{
        printf("Numero invalido\n");
    }

    return 0;
}
