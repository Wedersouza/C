//7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
#include <stdio.h>

int main(){
    float valor, cotacao;

    printf("Digite o valor em real: ");
    scanf("%f",&valor);
    printf("Digite a cotacao do dolar: ");
    scanf("%f",&cotacao);

    printf("\nO valor correspondente de %0.2f reais em dolares é %0.2f\n",valor,valor*cotacao );
    return 0;
}
