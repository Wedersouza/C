//5) Fa�a um programa que leia um valor do tipo float e depois o imprima usando o operador �%d�. Veja o que aconteceu.
#include <stdio.h>

int main(){
    float numero;
    printf("Digite um numero inteiro: ");
    scanf("%f",&numero);
    printf("%d",numero);
    return 0;
}
//Assim como o operador float n�o � capaz de imprimir uma vari�vel do tipo inteiro, o operador decimal n�o � capaz de imprimir uma variavel float
