//15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido.
//Exemplo: Número lido = 123 Número gerado = 321
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
