/*4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/
#include <stdio.h>
int main(){
    float s,n;
    printf("Digite o valor do salario: ");
    scanf("%f",&s);
    printf("Digite o valor de prestacoes do imprestimo: ");
    scanf("%f",&n);
    printf("\n");

    if(n>s*0.2){
        printf("Emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }
    return 0;
}

