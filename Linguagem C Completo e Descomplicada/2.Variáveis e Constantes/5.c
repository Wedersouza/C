//5) Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.
#include <stdio.h>

int main(){
    float numero;
    printf("Digite um numero inteiro: ");
    scanf("%f",&numero);
    printf("%d",numero);
    return 0;
}
//Assim como o operador float não é capaz de imprimir uma variável do tipo inteiro, o operador decimal não é capaz de imprimir uma variavel float
