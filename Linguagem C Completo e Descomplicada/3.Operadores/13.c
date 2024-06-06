//13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: h = √((a^2)+(b^2))
//Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.cilindro circular#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,h;
    printf("Calculo da hipotenusa\nDigite o valor do primeiro cateto: ");
    scanf("%f",&a);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f",&b);

    h = sqrt( pow(a,2)+pow(b,2));
    printf("\nHipotenusa do triangulo: %0.2f\n",h);
    return 0;
}
