/*11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66*/
#include <stdio.h>
int main(){
    int n;
    do{
        printf("Digite um numero positivo: ");
        if(scanf("%d",&n)!=1 || n<0){
            while(getchar()!='\n');
            printf("\nEntrada de dados invalida\n\n");
        }else{
            break;
        }
    }while(1);

    printf("\nDivisores do numero %d: ",n);
    for(int i=1; i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}
