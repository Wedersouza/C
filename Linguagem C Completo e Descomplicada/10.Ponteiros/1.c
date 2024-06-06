/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.*/
#include <stdio.h>
int main(){
    int a=0,b=0;

    if(&a>&b){
        printf("'A' possui o maior endereço\nendereco de 'A': %p\nendereco de 'A': %p\n\n",(void*)&a,(void*)&b);
    }else{
        printf("'A' possui o maior endereço\nendereco de 'A': %p\nendereco de 'A': %p\n\n",(void*)&a,(void*)&b);
    }
    return 0;
}
