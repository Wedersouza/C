/*10) Considere a seguinte declara��o: int a,*b,**c,***d. Escreva um programa que leia
a vari�vel a e calcule e exiba o dobro, o triplo e o qu�druplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o qu�druplo.*/
#include <stdio.h>

int main(){
    int a,*b,**c,***d;
    printf("Digite um valor: ");
    scanf("%d",&a);

    b = &a;
    c = &b;
    d = &c;


    printf("\nvalor: %d \ndobro: %d \ntriplo: %d \nquadruplo : %d\n\n", a, *b *2, **c *3,***d *4);
    return 0;
}
