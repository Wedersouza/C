/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>
int main(){
    int soma = 0;

    for(int i=1; i<=50; i++){
        if(i%2==0){
            soma += i;
        }
    }
    printf("Soma dos 50 primeiros numeros pares: %d",soma);
    return 0;
}
