//1) Fa�a um programa que leia um n�mero inteiro e retorne seu antecessor e seu sucessor.
#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    printf("\nNumero: %d\nAntecessor: %d\nSucessor: %d\n",n,n-1,n+1);
    return 0;
}
