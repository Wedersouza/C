/*10)) Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122.*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[256];

    //Leitura das strings
    printf("Digite a string: ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';


    //Conversão dos caracteres minusculo para maiuscula
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=97&&str[i]<=122){
            str[i] -= 32;
        }
    }

    printf("String: %s",str);
    return 0;
}
