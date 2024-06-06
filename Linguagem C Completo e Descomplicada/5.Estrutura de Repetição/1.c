/*1) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.*/
#include <stdio.h>
int main(){
    int numero;

    do{
        printf("Digite um numero inteiro positivo: ");
        if( scanf("%d",&numero) != 1 || numero<=0){
            while(getchar()!='\n');
            printf("Entrada invalida\n\n");
        }
    }while(numero<=0);

    printf("\n");
    for(int i=0; i<=numero; i++){
        printf("%d\n",i);
    };
    return 0;
}

