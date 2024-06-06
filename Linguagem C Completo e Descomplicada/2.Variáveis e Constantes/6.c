//6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
#include <stdio.h>

int main(){
    double n;
    printf("Digite um valor: ");
    scanf("%lf",&n);
    printf("Valor em notacao cientifica: %e\n",n);
    return 0;
 }
