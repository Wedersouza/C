/* 8) Elabore uma fun��o para verificar se um n�mero � um quadrado perfeito. Um
quadrado perfeito � um n�mero inteiro n�o negativo que pode ser expresso como
o quadrado de outro n�mero inteiro. Exemplos: 1, 4, 9.*/
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
