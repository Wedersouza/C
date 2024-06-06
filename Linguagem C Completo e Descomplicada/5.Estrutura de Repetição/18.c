/*18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o
número fornecido é primo ou não.*/

#include <stdio.h>
int main(){
    int n, primo = 1;

    do{
        printf("Digite um numero maior que 1: ");
        scanf("%d",&n);
    }while(n<=1);

    if(n==2){
        primo = 0;
    }else{
        for(int i=2; i<n;i++){
            if(n%i==0){
                primo = 0;
                break;
            }
        }
    }

    if(primo==0){
        printf("%d nao e um numero primo\n", n);
    }else{
        printf("%d e um numero primo\n", n);
    }
    return 0;
}
