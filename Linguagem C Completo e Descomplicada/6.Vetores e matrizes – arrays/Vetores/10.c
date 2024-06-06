/*10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.*/
#include <stdio.h>
int main(){
    int vetor[100];
    //i=percorrer os numeros naturais
    //j=percorrer as posicoes do vetor
    for(int i=1, j=0; j<100 ;i++){
        if(i%7!=0){
            vetor[j] = i;
            j++;
        }
    }

    for(int i=0;i<100;i++){
        printf("%d \n",vetor[i]);
    }
    return 0;
}
