/*4) Crie uma estrutura chamada Ret�ngulo. Essa estrutura dever� conter o ponto
superior esquerdo e o ponto inferior direito do ret�ngulo. Cada ponto � definido
por uma estrutura Ponto, a qual cont�m as posi��es X e Y. Fa�a um programa que
declare e leia uma estrutura Ret�ngulo e exiba a �rea e o comprimento da diagonal
e o per�metro desse ret�ngulo.*/
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
    float area, diagonal, perimetro;
    float altura, base;

    printf("Digite o x e o y do ponto superior esquerdo do retangulo: ");
    scanf("%d%d",&r1.superior_esquerdo.x,&r1.superior_esquerdo.y);
    printf("Digite o x e o y do ponto inferior direito do retangulo: ");
    scanf("%d%d",&r1.inferior_direito.x,&r1.inferior_direito.y);

    altura = r1.superior_esquerdo.y - r1.inferior_direito.y;
    base = r1.inferior_direito.x - r1.superior_esquerdo.x;

    diagonal = sqrt( pow((r1.superior_esquerdo.x-r1.inferior_direito.x),2)+pow((r1.superior_esquerdo.y-r1.inferior_direito.y),2) );
    area = base * altura;
    perimetro = (base*2)+(altura*2);

    printf("base: %0.2f\naltura: %0.2f\nDiagonal: %0.2f\nArea: %0.2f\Perimetro: %0.2f\n\n",base,altura,diagonal,area,perimetro);

}
