//2) Faça um programa que leia um número real e imprima a quinta parte desse número.
#include <stdio.h>

int main(){
    float n;
    printf("Digite um numero real: ");
    scanf("%f",&n);

    printf("\nNumero: %0.2f\nQuinta parte do numero: %0.2f\n",n,n/5);
    return 0;
}
