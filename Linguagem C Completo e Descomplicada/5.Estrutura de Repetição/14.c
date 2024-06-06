/*14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa
no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>
int main(){
    int n,x, aux1=0, aux2=1;
    do{
        printf("Digite um numero natural: ");
        if(scanf("%d",&n)!=1){
            while(getchar()!='\n');
            printf("\nEntrada de dados invalida\n\n");
        }else{
            break;
        }
    }while(1);

    if(n==0){
        x = 0;
    }else if(n==1){
        x = 1;
    }else{
        for(int i=2; i<=n;i++){
            aux2 = aux1;
            aux1 = x;
            x = aux1+aux2;
        }
    }
    printf("\n%d termo da sequencia de Fibonacci: %d\n",n,x);
}
