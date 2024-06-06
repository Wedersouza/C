/*3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.*/
#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}pontos;

int main(){
    float d;
    pontos p1,p2;

    printf("Digite x do ponto 1: ");
    scanf("%d",&p1.x);
    printf("Digite y do ponto 1: ");
    scanf("%d",&p1.y);


    printf("Digite x do ponto 2: ");
    scanf("%d",&p2.x);
    printf("Digite y do ponto 2: ");
    scanf("%d",&p2.y);

    d = sqrt( pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2) );
    printf("\nDistancia: %0.2f",d);
}
