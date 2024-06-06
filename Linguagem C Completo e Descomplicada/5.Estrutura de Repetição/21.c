/*21) Escreva um programa que leia certa quantidade de números, imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a serem
lidos deve ser fornecida pelo usuário.
*/

#include <stdio.h>
int main(){
    int numero, quantnumero, maior, quantmaior = 0,aux;

    printf("Digite a quantidade de numeros: ");
    scanf("%d",&quantnumero);
    printf("\n");

    for(int i=0;i<quantnumero;i++){
        printf("Digite um numero: ");
        scanf("%d",&aux);

        if(quantmaior == 0 || aux>maior){
            quantmaior = 1;
            maior = aux;
        }else if(aux==maior){
                quantmaior++;
        }
    }
    printf("\nMaior numero: %d \nQuantidade de vezes lido: %d\n",maior,quantmaior);
    return 0;
}



