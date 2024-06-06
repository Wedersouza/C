/*14) Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números
em que m é a média desse vetor.  Utilizando a formula d = sqrt(1/(n - 1) * sum i = 0 to n - 1 (V[i] - m)). Considere n = 10. O vetor v deve ser lido do teclado.*/
//FORMUL DO EXERCICIO INCORRETA

#include <stdio.h>
#include <math.h>
#define n 4

int main(){
    int V[n],soma=0;
    float m,d,somatorio=0;

    for(int i=0;i<n;i++){
        printf("Digite o valor do vetor[%d]: ",i);
        if(scanf("%d",&V[i])!=1){
            printf("Entrada de dados invalido!");
            return 1;
        }
        soma += V[i];
    }
    m = (float)soma/n;

    for(int i=0;i<=n-1;i++){
        somatorio += V[i] - m;
        printf("%d = %d - %f  \n",somatorio,V[i],m);
    }
    printf("%d\n",somatorio);
    d = sqrt(1/(n-1)*somatorio);
    printf("d = %0.2f",d);
    return 0;
}
