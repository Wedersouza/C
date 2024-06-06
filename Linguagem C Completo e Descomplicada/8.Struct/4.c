/*4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que
declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo.*/
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
