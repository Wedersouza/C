/*2)Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[256];
    printf("Digite uma string: ");

    //Leitura da string
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0'; //remove o caractere de nova linha

    //Impressão das 4 primeiras letras da String
    printf("\n");
    for(int i=0;i<4&&str[i]!='\0';i++){
        printf("Letra %d: %c\n",i+1,str[i]);
    }
    return 0;
}
