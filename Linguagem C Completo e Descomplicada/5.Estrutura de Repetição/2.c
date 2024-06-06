/*2) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/
#include <stdio.h>
int main(){
    int numero;

    do{
        printf("Digite um numero inteiro positivo: ");
        if( scanf("%d",&numero) != 1 || numero <= 0){
            while(getchar()!='\n');
            printf("Entrada de dados invalida!\n\n");
        }
    }while(numero<=0);

    for(int i=numero; i>=0; i--){
        printf("%d\n",i);
    };

    return 0;
}
