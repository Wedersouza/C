//9) Faça um programa que leia dois valores do tipo float. Use um único comando de
//leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
//foram lidos.
#include <stdio.h>

int main(){
    float n1,n2;
    printf("Digite dois numeros reais: ");
    scanf("%f %f",&n1,&n2);
    printf("Numero digitados: %0.2f e %0.2f\n",n2,n1);
    return 0;
}
