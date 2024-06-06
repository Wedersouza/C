/*1) Faça um programa que leia uma string e a imprima na tela.*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[256];
    printf("Digite uma string: ");

    //Leitura da string
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0'; //Remove o caractere de nova linha

    printf("String digitada: %s",str);
    return 0;
}
