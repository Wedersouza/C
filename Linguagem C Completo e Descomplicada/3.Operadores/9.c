//9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.
#include <stdio.h>

int main(){
    float g,r;

    printf("Digite um angulo em graus: ");
    scanf("%f",&g);

    r = (g*(3.141592))/180;

    printf("Conversão para radianos: %0.2f\n ",r);
    return 0;
}
