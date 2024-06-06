//19) Faça um programa que calcule e escreva o valor de S:

#include <stdio.h>
int main(){
    float s=0;

    for(int i=1,j=1; i<=99 && j<=55;i+=2,j++){
        printf("%d %d %0.2f\n",i,j,s);
        s += (float)i/j;
    }

    printf("%0.2f",s);
    return 0;
}
