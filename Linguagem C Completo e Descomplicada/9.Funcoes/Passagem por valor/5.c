/*5) Escreva uma função para o cálculo do volume de uma esfera
V = 4/3π * r3,
 em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.*/
#include <stdio.h>
#include <math.h>
 float volumeEsfera(float r){
    float V = 4/3*(3.14)*pow(r,3);
    return V;
 }

 int main(){
    printf("%0.2f",volumeEsfera(1));
    return 0;
 }
