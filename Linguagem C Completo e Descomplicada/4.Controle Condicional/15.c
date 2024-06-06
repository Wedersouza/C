/*) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas com (-b+-raiz(∆))/2 que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo
grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ∆ > 0, existem duas raízes reais. Imprima as raízes*/
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c, delta, x1,x2;

    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("Digite o valor de b: ");
    scanf("%f",&b);
    printf("Digite o valor de c: ");
    scanf("%f",&c);

    if(a==0){
        printf("Nao e uma equacao de segundo grau\n");
        return 0;
    }

    delta = pow(b,2) - 4*a*c;
    if(delta<0){
        printf("Não existe raiz");
    }else if(delta == 0){
        x1 = (-b)/ (2*a);
        printf("Raiz unica: %0.2f",x1);
    }else{
        x1 = ((-b)+sqrt(delta)) / (2*a);
        x2 = ((-b)-sqrt(delta)) / (2*a);
        printf("Existem duas raizes: %0.2f e %0.2f",x1,x2);
    }
    return 0;
}
