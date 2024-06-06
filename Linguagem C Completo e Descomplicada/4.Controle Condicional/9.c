/*9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.*/

/*Altura                              Peso
                       Até 60       Entre 60-90     (inclusive) Acima de 90
Menor do que 1,20        A               D                    G
  1,20-1,70              B               E                    H
Maior do que 1,70        C               F                    I*/

#include <stdio.h>
int main(){
    float h,p;
    char c;


    printf("Digite a sua altura(m): ");
    scanf("%f",&h);
    if(h<=0){
        printf("Entrada invalida: altura negativa ou zerada");
        return 0;
    }

    printf("Digite o seu peso(kg): ");
    scanf("%f",&p);
    if(p<=0){
        printf("Entrada invalida: peso negativa ou zerado");
        return 0;
    }

    if(h < 1.2){
        if(p < 60){
            c = 'A';
        }else if(p >= 60 && p <= 90){
            c = 'D';
        }else{
            c = 'G';
        }
    }else if(h >= 1.2 && h <= 1.7){
        if(p < 60){
            c = 'B';
        }else if(p >= 60 && p <= 90){
            c = 'E';
        }else{
            c = 'H';
        }
    }else{
        if(p < 60){
            c = 'C';
        }else if(p >= 60 && p <= 90){
            c = 'F';
        }else{
            c = 'I';
        }
    }

    printf("\nClassificacao: %c\n",c);
    return 0;
}
