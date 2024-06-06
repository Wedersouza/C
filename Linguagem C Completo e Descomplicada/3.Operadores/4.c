//4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
#include <stdio.h>

int main(){
    float n1,n2,n3,n4;
    printf("Digite o valor de 4 numeros reais: ");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    printf("Media aritmetica dos valores %0.2f %0.2f %0.2f e %0.2f: %0.2f\n",n1,n2,n3,n4,(n1+n2+n3+n4)/4);
    return 0;
}
