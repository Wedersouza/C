//13) Fa�a um programa que leia um caractere do tipo char e depois o imprima entre
//aspas duplas. Assim, se o caractere lido for a letra A, dever� ser impresso �A�.
#include <stdio.h>

int main(){
    char c;

    printf("Digite um caractere: ");
    scanf("%c",&c);

    printf("Caractere lido: \"%c\"\n",c);
    return 0;
}
