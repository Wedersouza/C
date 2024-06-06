/*17) Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>
int main(){
    int N, aux=1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            printf("%2d ",aux++);
        }
        printf("\n");
    }
    return 0;
}
