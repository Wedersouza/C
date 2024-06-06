/*8) Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:
Categoria Idade
Infantil A 5-7
Infantil B 8-10
Juvenil A 11-13
Juvenil B 14-17
Sênior maiores de 18 anos*/
#include <stdio.h>
int main(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("\n");

    printf("Categoria\tidade\n");
    if(idade >= 5 && idade <= 7){
        printf("Infantil A\t5-7");
    }else if(idade >= 8 && idade <= 10){
        printf("Infantil B\t8-10");
    }else if(idade >= 11 && idade <= 13){
        printf("Juvenil A\t11-13");
    }else if(idade >= 14 && idade <= 17){
        printf("Juvenil B\t14-17");
    }else if(idade >= 18){
        printf("Senior\t\tmaiores de 18 anos");
    }else{
        printf("Idade invalida!");
    }
    printf("\n");

    return 0;
}

