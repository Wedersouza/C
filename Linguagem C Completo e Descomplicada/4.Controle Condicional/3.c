//3) Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar
#include <stdio.h>
int main(){
    int a;

    printf("Digite o numero inteiro: ");
    scanf("%d",&a);

    if(a%2==0){
        printf("O numero %d e par\n",a);
    }else{
        printf("O numero %d e impar\n",a);
    }
    return 0;
}
