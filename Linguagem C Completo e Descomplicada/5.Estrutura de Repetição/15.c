/*15) Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número
lido.*/

#include <stdio.h>
#include <limits.h>

int main(){
    int numero=0, maior=INT_MIN, menor=INT_MAX;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d",&numero);
        if(numero<0){
            break;
        }

        if(maior<numero){
            maior = numero;
        }
        if(menor>numero){
            menor = numero;
        }
    }while(1);

    if(maior==INT_MIN&&menor==INT_MAX){
        return 0;
    }else{
        printf("\n\nMaior numero: %d\nMenor numero: %d\n",maior,menor);
    return 0;
    }

}


