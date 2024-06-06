/* 2) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).*/
#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}pontos;

int main(){
    float d;
    pontos p1;

    printf("Digite o x: ");
    scanf("%d",&p1.x);
    printf("Digite o y: ");
    scanf("%d",&p1.y);

    d = sqrt( pow((p1.x-0),2)+pow((p1.y-0),2) );
    printf("\nDistancia: %0.2f",d);
}
