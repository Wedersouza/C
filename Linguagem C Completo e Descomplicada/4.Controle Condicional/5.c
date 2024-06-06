/*5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/
#include <stdio.h>
#include <math.h>
int main(){
    float n;
    printf("Digite um numero: ");
    scanf("%f",&n);

    if(n>0){
        printf("%0.2f ao quadrado: %0.2f\nA raiz quadrada de %0.2f: %0.2f\n",n,pow(n,2),n,sqrt(n));
    }
    return 0;
}
