/* 2) Escreva uma função para o cálculo do volume e área de uma esfera
V = 4/3 π + r3, A = 4 π * r2 em que π = 3.1414592.
O valor do raio r deve ser passado por parâmetro, e os valores calculados devem ser retornados por referência*/
#include <stdio.h>
#include <math.h>
#define PI 3.1414592

void calculoVolumeArea(float raio, float *Volume, float *Area){
    *Volume = (4.0/3.0)*PI + pow(raio,3);
    *Area = 4*PI*pow(raio,2);
}

int main(){
    float Volume,Area,raio;
    printf("Digite o valor da raio: ");
    scanf("%f",&raio);
    calculoVolumeArea(raio,&Volume,&Area);
    printf("\nVolume: %0.2f\nArea: %0.2f",Volume,Area);
    return 0;
}
