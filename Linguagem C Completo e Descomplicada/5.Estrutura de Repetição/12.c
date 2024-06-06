/*12) Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores
do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

#include <stdio.h>
int main(){
    int n, aux, soma = 0;

    do{
        printf("Digite o valor de um numero inteiro: ");
        if(scanf("%d",&n)!=1){
            while(getchar()!='\n');
            printf("\nEntrada de dados invalida\n\n");
        }else{
            break;
        }
    }while(1);

    for(int i=1; i<n; i++){
        if(n%i==0){
            soma += i;
        }
    }
    printf("\nA soma dos divisores de %d: %d\n",n,soma);
    return 0;
}
