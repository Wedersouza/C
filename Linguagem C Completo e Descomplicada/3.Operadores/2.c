//2) Fa�a um programa que leia um n�mero real e imprima a quinta parte desse n�mero.
#include <stdio.h>

int main(){
    float n;
    printf("Digite um numero real: ");
    scanf("%f",&n);

    printf("\nNumero: %0.2f\nQuinta parte do numero: %0.2f\n",n,n/5);
    return 0;
}
