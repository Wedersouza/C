/*11) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
65 e 90*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[256];

    //Leitura das strings
    printf("Digite a string: ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';

    for(int i=0; i<strlen(str);i++){
        if(str[i]>=65&&str[i]<=90){
            str[i] += 32;
        }
    }

    printf("String: %s",str);
    return 0;
}
