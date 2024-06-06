/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
valor lido.*/
#include <stdio.h>
int main(){
    int n = 10, menor, maior, aux;

    for(int i=0;i<n;i++){
        do{
            printf("Digite o valor inteiro %d: ",i+1);
            if(scanf("%d",&aux)!=1){
                while(getchar()!='\n');
                printf("\nEntrada de dados invalida\n\n");
            }else{
                break;
            }
        }while(1);
        if(i==0){
            menor = aux;
            maior = aux;
        }else{
            if(maior<aux){
                maior = aux;
            }
            if(menor>aux){
                menor = aux;
            }
        }
    }
    printf("\nMaior numero: %d\nMenor numero: %d",maior,menor);
    return 0;
}
