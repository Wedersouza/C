/* Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1^3 + 2^3 + ... + n^3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int n){
    if(n==1){
        return 1;
    }else{
        return pow(n,3)+soma(n-1);
    }
}

int main(){
    printf("%d",soma(2));
    return 0;
}