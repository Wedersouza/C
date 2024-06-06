//1) Faça um programa que leia dois números e mostre qual deles é o maior
#include <stdio.h>
int main(){
    int a,b;
    printf("Digite dois numeros: ");
    scanf("%d%d",&a,&b);
    printf("\n");

    if(a>b){
        printf("O numero %d e maior que o numero %d",a,b);
    }else if(a<b){
        printf("O numero %d e maior que o numero %d",b,a);
    }else{
        printf("Os numeros %d sao iguais %d",a);
    }
    return 0;
}
