/*5) Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não
dentro do retângulo.*/

#include <stdio.h>
typedef struct{
    int x;
    int y;
}Ponto;


typedef struct{
    Ponto superior_esquerdo;
    Ponto inferior_direito;
}Retangulo;

int main(){
    Retangulo r1;
    Ponto p1;

    printf("Digite o x e o y do ponto superior esquerdo do triangulo: ");
    scanf("%d%d",&r1.superior_esquerdo.x,&r1.superior_esquerdo.y);
    printf("Digite o x e o y do ponto inferior direito do triangulo: ");
    scanf("%d%d",&r1.inferior_direito.x,&r1.inferior_direito.y);

    printf("Digite x e o y um ponto: ");
    scanf("%d",&p1.x,&p1.y);

    if((p1.x<=r1.inferior_direito.x&&p1.x>=r1.superior_esquerdo.x)&&(p1.y<=r1.superior_esquerdo.y&&p1.y>=r1.inferior_direito.y)){
        printf("Ponto incluso no triangulo");
    }else{
        printf("Ponto nao esta incluso");
    }

}
