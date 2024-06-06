//12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
//O volume de um cilindro circular é calculado por meio da seguinte fórmula:
//V = π * raio2 * altura, em que π = 3.141592
#include <stdio.h>

int main(){
    float r,v,h;
    printf("Cilindro circular\nDigite o valor da altura: ");
    scanf("%f",&h);
    printf("Digite o valor do raio: ");
    scanf("%f",&r);

    v = (3.141592)*r*h;

    printf("Volume do cilindro circular: %0.2f\n",v);
    return 0;
}
