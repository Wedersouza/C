/*14) Elabore uma função que receba por parâmetros os coeficientes de uma equação do
segundo grau. Em seguida, calcule e mostre as raízes dessa equação. Lembre-se de
que as raízes são calculadas como
 em que Δ = b2 –4 * a * c e ax2
 + bx + c = 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a
mensagem “Não é equação de segundo grau” e retorne o valor −1. Do contrário,
retorne o número de raízes e as raízes (por referência) se elas existirem:
Se • Δ < 0, não existe real. Número de raízes: 0.
Se • Δ = 0, existe uma raiz real. Número de raízes: 1.
Se • Δ > 0, existem duas raízes reais. Número de raízes: 2*/
#include <stdio.h>
#include <math.h>

int equacao_segundo_grau(float a, float b, float c,int *raizes, float *x1,float *x2){
    float delta;
    delta = pow(b,2)-(4*a*c);

    if(a==0){
        printf("Nao e uma equacao de segundo grau");
        return -1;
    }

    if(delta<0){
        *raizes = 0;
        printf("Essa equacao do segundo grau não possui raizes reais");

    }else if(delta==0){
        *raizes = 1;
        *x1 = -b/(2*a);
        printf("A equacao quadrada possui uma raiz: %0.2f",*x1);

    }else{
        *raizes = 2;
        *x1 = ((-b) + sqrt(delta)) / (2*a);
        *x2 = ((-b) - sqrt(delta)) / (2*a);
        printf("A equacao quadrada possui duas raizes: %0.2f e %0.2f",*x1,*x2);
    }
}

int main(){
    float a,b,c,x1,x2,raizes;
    printf("Digite o valor de a, b e c da equcao de segundo grau: ");
    scanf("%f%f%f",&a,&b,&c);
    equacao_segundo_grau(a,b,c,&raizes,&x1,&x2);

}
