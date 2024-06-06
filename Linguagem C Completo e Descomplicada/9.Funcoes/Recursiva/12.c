/*12) Escreva uma função recursiva que receba um valor inteiro em base decimal e o
imprima em base binária*/

#include <stdio.h>
#include <stdlib.h>

int decimal(int n){
    if(n==1){
        return 1;
    }else{
        return decimal(n/2)*10+n%2; 
    }
}

int main(){
    printf("%d",decimal(3));

    return 0;
}