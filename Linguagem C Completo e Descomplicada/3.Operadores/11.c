//11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = π * raio2, sendo π = 3.141592.

#include <stdio.h>
int main(){
    float a,r;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f",&r);

    a = (3.141592)*r;

    printf("Area do circulo correspondente: %0.2f\n ",a);
    return 0;
}
