//7) Fa�a um programa que leia um valor em reais e a cota��o do d�lar. Em seguida, imprima o valor correspondente em d�lares.
#include <stdio.h>

int main(){
    float valor, cotacao;

    printf("Digite o valor em real: ");
    scanf("%f",&valor);
    printf("Digite a cotacao do dolar: ");
    scanf("%f",&cotacao);

    printf("\nO valor correspondente de %0.2f reais em dolares � %0.2f\n",valor,valor*cotacao );
    return 0;
}
