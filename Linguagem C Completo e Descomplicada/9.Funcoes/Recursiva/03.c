/*3) Crie uma função recursiva que receba um número inteiro N e imprima todos os
números naturais de 0 até N em ordem crescente*/

#include <stdio.h>
#include <stdlib.h>

void imprima(int n){
    if(n==0){
        printf("%d",n);
    }else{
        imprima(n-1);
        printf("%d",n);
    }
}

int main(){
    imprima(3);
    return 0;
}