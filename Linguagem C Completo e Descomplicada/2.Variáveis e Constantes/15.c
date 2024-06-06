//15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprimaas de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
//uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.
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
