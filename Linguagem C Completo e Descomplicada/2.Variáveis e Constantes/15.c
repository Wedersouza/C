//15) Escreva um programa que leia tr�s vari�veis: char, int e float. Em seguida, imprimaas de tr�s maneiras diferentes: separadas por espa�os, por uma tabula��o horizontal e
//uma em cada linha. Use um �nico comando printf() para cada opera��o de escrita das tr�s vari�veis.
#include <stdio.h>

int main(){
    char c;
    int d;
    float f;

    printf("Digite um caractere: ");
    scanf("%c",&c);
    printf("Digite um numero inteiro: ");
    scanf("%d",&d);
    printf("Digite um numero real: ");
    scanf("%f",&f);

    printf("\n%c %d %0.2f\n\n",c,d,f);
    printf("%c\t%d\t%f\n\n",c,d,f);
    printf("%c\n%d\n%0.2f\n\n",c,d,f);
    return 0;
}
