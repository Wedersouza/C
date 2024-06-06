/*6) Crie uma função recursiva que retorne a média dos elementos de um vetor de
inteiros.*/

#include <stdio.h>
#include <stdlib.h>

float media(int v[],int t, int *s,int qtd){
    if(t==0){
        *s += v[t];
        return *s/qtd;
    }else{
        *s += v[t];
        return media(v,t-1,s,qtd);
    }
}

int main(){
    int v[] = {6,3,3};
    int t = 3;
    int s = 0;
    int qtd = 3;

    printf("%.2f",media(v,t-1,&s,qtd));
    return 0;
}