/* 4) Faça um programa que leia uma string e a imprima de trás para a frente.*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[256];
    int tam;

    printf("Digite uma string: ");

    //Leitura da string
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0'; //remove o caractere de nova linha

    tam = strlen(str);
    printf("\nString de tras pra frente: ");

    //impressao dos dados de tras pra frente
    for(int i=(tam)-1; i>=0 ;i--){ //subtraio 1 porque os indices vao de 0 a tam-1
        printf("%c",str[i]);
    }
    printf("\n\n");
    return 0;
}
