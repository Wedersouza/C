//5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
#include <stdio.h>

int main(){
    int idade,anoatual;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("Digite o ano atual: ");
    scanf("%d",&anoatual);

    printf("\nAno de nascimento %d\n",anoatual-idade);
    return 0;
}
