/*5) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int t){
    if(t==0){
        return v[t];
    }else{
        return v[t]+soma(v,t-1);
    }
}

int main(){
    int v[] = {1,2,3,5};
    int t = 4;

    printf("%d",soma(v,t-1));

    return 0;
}