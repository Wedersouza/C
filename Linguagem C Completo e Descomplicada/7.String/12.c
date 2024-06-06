/*12) Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor
total, o valor do desconto e o valor a ser pago à vista.*/
#include <stdio.h>
#include <string.h>
int main(){
    char nome[256];
    float valor;

    //Leituras
    printf("Digite o nome da mercadoria: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strlen(nome)-1] = '\0';
    printf("Digite o valor da mercadoria: ");
    scanf("%f",&valor);

    printf("\n\nNome da mercadoria: %s\nValor total: %0.2f\nValor do desconto: %d%%\nValor a ser pago a vista %0.2f\n\n",nome,valor,10,valor*0.8);

    return 0;
}
