/*13) Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j
da string S.*/
#include <stdio.h>
#include <string.h>
int main(){
    char S[256];
    int i,j,aux;


    printf("Digite o valor da strings: ");
    fgets(S,sizeof(S),stdin);
    S[strlen(S)-1] = '\0';

    printf("Digite valor positivos para i e j: ");
    if(scanf("%d%d",&i,&j)!=2&&i<0||j<0){
        printf("Entrada invalida!");
        return 1;
    }

    if(i>=strlen(S)||j>=strlen(S)){
        printf("\nIndices fora do limite da string\n");
        return 1;
    }

    printf("\n");
    if(i<=j){
        aux = i;
        while(aux<=j){
            printf("%c ",S[aux]);
            aux++;
        }
    }else{
        aux = j;
        while(aux<=i){
            printf("%c ",S[aux]);
            aux++;
        }
    }
    printf("\n");
    return 0;
}
