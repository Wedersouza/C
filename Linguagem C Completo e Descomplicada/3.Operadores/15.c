//15) Fa�a um programa para ler um n�mero inteiro positivo de tr�s d�gitos. Em seguida, calcule e mostre o n�mero formado pelos d�gitos invertidos do n�mero lido.
//Exemplo: N�mero lido = 123 N�mero gerado = 321
#include <stdio.h>


int main(){
    int n,d1,d2,d3;
    printf("Digite um numero inteiro positivo de 3 digitos: ");
    scanf("%d",&n);

    d1 = n % 10;
    d2 = (n/10) % 10;
    d3 = n/100;

    printf("\nNumero lido: %d\nNumero gerado: %d%d%d\n",n,d1,d2,d3);
    return 0;
}
