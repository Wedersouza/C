/* 1) Escreva uma fun��o que receba por par�metro dois n�meros e retorne o maior
deles.*/
#include <stdio.h>

int maior_numero(int n1,int n2){
    int maior;
    if(n1>=n2){
        maior = n1;
    }else{
        maior = n2;
    }
    return maior;
}

int main(){
    printf("%d",maior_numero(3,2));
    return 0;
}
