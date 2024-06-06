/* 5) Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[256],aux;
    int tam;

    printf("Digite a string: ");

    //Leitura da string
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0'; //remove o caractere de nova linha

    tam = strlen(str); //atribui o tamanho da string

    //inversao  dos caracteres
    for(int i=0, j=tam-1; i<=tam%2;i++,j--){
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }

    printf("\nString invertida: %s\n\n",str);
}
