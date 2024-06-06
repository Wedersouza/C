/*14) Crie uma função recursiva que retorne o menor elemento em um vetor.*/

#include <stdio.h>
#include <stdlib.h>

int menor(int v[],int t){
    if(t==0){
        return v[t];
    }else{
        int m = menor(v,t-1);
        if(m<v[t]){
            return m;
        }else{
            return v[t];
        }
    }
}

int main(){
    int v[] = {34,232,12,56};
    int t = sizeof(v)/sizeof(v[0]);
    printf("%d",menor(v,t-1));

    return 0;
}