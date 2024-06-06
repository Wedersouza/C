/*4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
V = π * raio2 * altura*/
#include <stdio.h>
#include <math.h>

float volumeCilindro(float h,float r){
    float V = 3.14 * pow(r,2) * h;
    return V;
}

int main(){
    printf("%0.2f",volumeCilindro(1,1));
    return 0;
}
