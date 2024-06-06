/*20) Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor
E, conforme a fórmula a seguir:*/

#include <stdio.h>
int main(){
    int n,denominador = 1;
    float e = 0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d",&n);

    for(int i=1; i<=n;i++){
        denominador = 1;
        for(int j=i;j>0;j--){
            denominador *= j;
        }
        e += 1.0/denominador;
    }

    printf("%0.2f",e);
    return 0;
}

