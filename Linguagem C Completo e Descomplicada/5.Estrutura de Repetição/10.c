/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/
#include <stdio.h>
int main(){
    int numero, soma = 0;
    float media;
    for(int i=0;i<10;i++){
        do{
            printf("Digite o numero inteiro positivo %d: ",i+1);
            if(scanf("%d",&numero)!=1||numero<0){
                while(getchar()!='\n');
            }else{
                break;
            }
        }while(1);

        soma += numero;
    }
    media = soma/10.0;
    printf("\nMedia dos valores inteiro positivo: %0.2f",media);
    return 0;
}

