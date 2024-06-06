//3) Faça um programa que leia três valores inteiros e mostre sua soma.
#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("Digite o valor de 3 numeros inteiros: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("\nSoma dos valores %d, %d e %d: %d\n",n1,n2,n3,n1+n2+n3);
    return 0;
}
