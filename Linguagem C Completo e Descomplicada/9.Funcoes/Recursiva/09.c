/*9) Escreva uma função recursiva que receba um número inteiro positivo n. Calcule e
retorne o seu fatorial n!*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n==1){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}
int main(){
    printf("%d",fatorial(4));

    return 0;
}