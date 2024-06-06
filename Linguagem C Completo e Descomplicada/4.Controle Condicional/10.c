/*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:*/
#include <stdio.h>
int main(){
    int a,b,c,aux;
    float media;

    printf("\nInsira a media que deseja calcular: \n1.Geometrica\n2.Harmonica \n3.Ponderada \n4.Aritimetica\n\nEscolha uma opcao: ");
    scanf("%d",&aux);
    printf("\n\n");
    if(aux>=1&&aux<=4){
        printf("Entrada invalida\n");
        return 0;
    }

    printf("Digite 3 numero: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n\n");
    if(a<0||b<0||c<0){
        printf("Entrada invalida: altura negativa ou zerada\n");
        return 0;
    }
    switch(aux){
        case 1:
            media = a*b*c;
            printf("Media Geometrica: %0.2f\n",media);
            break;
        case 2:
            media = 1/(1/a + 1/b + 1/c);
            printf("Media Harmonica: %0.2f",media);
            break;
        case 3:
            media = (a+2 * b+3 * c)/6;
            printf("Media Ponderada: %0.2f",media);
            break;
        case 4:
            media = (a+b+c)/3;
            printf("Media Aritmetica: %0.2f",media);
            break;

        default:
            printf("Opcao escolhida invalida!");

        }
    return 0;
}
