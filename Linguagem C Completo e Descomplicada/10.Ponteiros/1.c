/*1) Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.*/
#include <stdio.h>
int main(){
    int a=0,b=0;

    if(&a>&b){
        printf("'A' possui o maior endere�o\nendereco de 'A': %p\nendereco de 'A': %p\n\n",(void*)&a,(void*)&b);
    }else{
        printf("'A' possui o maior endere�o\nendereco de 'A': %p\nendereco de 'A': %p\n\n",(void*)&a,(void*)&b);
    }
    return 0;
}
