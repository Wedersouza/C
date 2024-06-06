//2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.
#include <stdio.h>
int main(){
    int a,b;
    printf("Digite dois numeros: ");
    scanf("%d%d",&a,&b);
    printf("\n");

    if(a!=b){
        if(a>b){
            printf("O numero %d e maior que o numero %d",a,b);
        }else{
            printf("O numero %d e maior que o numero %d",b,a);
        }
    }else{
        printf("Os numeros sao iguais: %d",a);
    }
    return 0;
}
