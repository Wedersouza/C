/*Crie uma função recursiva que receba um número inteiro N e retorne o somatório
dos números de 1 a N.*/

#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if(n==1){
        return 1;
    }else{
        return n+somatorio(n-1);
    }
}

int main(){
    printf("%d",somatorio(2));
    return 0;
}