/*11) Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
Exemplo:
 Número lido = 123.
Número retornado = 321*/

#include <stdio.h>
#include <stdlib.h>

int inverter(int n,int i){
    if(n==0){
        return i;
    }else{
        int ultdig = n%10;
        i = i*10 + ultdig;
        n = n/10;
        return inverter(n,i);
    }
}

int main(){
    printf("%d",inverter(123,0));

    return 0;
}