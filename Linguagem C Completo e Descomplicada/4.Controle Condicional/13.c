/*13) Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.*/
#include <stdio.h>
int main(){
    int menu;
    float a,b,c;
    char operador;

    printf("\tMenu\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("\nEscolha uma das opcoes: ");
    scanf("%d",&menu);

    if(menu<1 || menu>4){
        printf("Opcao escolhida invalida!\n\n");
        return 0;
    }

    printf("\n\nDigite o primeiro valor: ");
    scanf("%f",&a);
    printf("Digite o segundo valor: ");
    scanf(" %f",&b);

    switch(menu){
        case 1:
            operador = '+';
            c = a+b;
            break;
        case 2:
            operador = '-';
            c = a-b;
            break;
        case 3:
            operador = '*';
            c = a*b;
            break;
        case 4:
            if(b==0){
                printf("\n\nNao e possivel dividir um numero por zero.\n");
                return 0;
            }

            operador = '/';
            c = a/b;
            break;
    }
    printf("\n\n%0.2f %c %0.2f = %0.2f\n\n",a,operador,b,c);
    return 0;
}
