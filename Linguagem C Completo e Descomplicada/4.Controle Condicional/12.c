/*12) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante*/
#include <stdio.h>
int main(){
    int n;
    printf("Digite o numero(1-7): ");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("Dia: segunda-feira");
            break;
        case 2:
            printf("Dia: terca-feira");
            break;
        case 3:
            printf("Dia: quarta-feira");
            break;
        case 4:
            printf("Dia: quinta-feira");
            break;
        case 5:
            printf("Dia: sexta-feira");
            break;
        case 6:
            printf("Dia: sabado");
            break;
        case 7:
            printf("Dia: domingo");
            break;

        default:
            printf("Numero invalido!");
    }
    printf("\n");
    return 0;
}
