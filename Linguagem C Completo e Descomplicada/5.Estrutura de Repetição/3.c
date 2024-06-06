/*3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/
#include <stdio.h>
int main(){
    int numero, impar = 0;

    do{
        printf("Digite um numero inteiro: ");
        if(scanf("%d",&numero) != 1){
            while(getchar()!='\n');
            printf("Entrada invalida!\n");
        }else{
            break;
        }
    }while(1);

    for(int i=1; impar < numero; i++){
        if(i%2!=0){
            printf("%d\n",i);
            impar++;
        }
    }
    return 0;
}
