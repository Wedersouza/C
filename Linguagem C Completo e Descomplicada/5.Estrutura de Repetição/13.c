/*13) Faça um programa que exiba a soma de todos os números naturais abaixo de
1.000 que são múltiplos de 3 ou 5.*/
#include <stdio.h>

int main(){
    int n = 1000, soma = 0;

    for(int i=n; i>=0; --i){
        if((i%3==0)||(i%5==0)){
            soma += i;
        }
    }
    printf("Soma de todos os numeros naturais abaixo de 1.000 que sao multiplos de 3 ou 5: %d",soma);
    return 0;
}
