/*8) Faça um programa que leia 10 inteiros e imprima sua média*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10, soma = 0, aux;
    float media;

    for(int i=0; i<n; i++){

        do{
            printf("Digite o valor inteiro %d: ",i+1);
            if(scanf("%d",&aux)!=1){
                while(getchar()!='\n');
                printf("\nEntrada de dados invalida: Digite um numero inteiro!\n\n");
            }else{
                break;
            }
        }while(1);

        soma += aux;
    }
    media = soma/n;
    printf("\nMedias dos 10 inteiros lidos: %0.2f\n",media);
    return 0;
}
