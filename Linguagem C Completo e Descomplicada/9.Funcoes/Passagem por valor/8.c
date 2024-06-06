/* 8) Elabore uma função para verificar se um número é um quadrado perfeito. Um
quadrado perfeito é um número inteiro não negativo que pode ser expresso como
o quadrado de outro número inteiro. Exemplos: 1, 4, 9.*/
#include <stdio.h>
#include <math.h>

int quadrado_perfeito(int n){
    for(int i=1;i<=(n/2);i++){
        if(pow(i,2)==n){
            return 0;
        }
    }
    return 1;
}

int main(){
    printf("%d",quadrado_perfeito(9));
    return 0;
}
