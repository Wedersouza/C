//10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
//(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
#include <stdio.h>

int main(){
    int dd,mm,aa;

    printf("Digite o valor do dia: ");
    scanf("%d",&dd);
    printf("Digite o valor do mes: ");
    scanf("%d",&mm);
    printf("Digite o valor do ano: ");
    scanf("%d",&aa);
    printf("\n");

    printf("Data:%d/%d/%d\n",dd,mm,aa);
    return 0;
}
