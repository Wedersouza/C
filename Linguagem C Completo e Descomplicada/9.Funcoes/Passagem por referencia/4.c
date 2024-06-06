/*4) Escreva uma função que receba um array contendo a nota de 10 alunos e retorne
a média dos alunos.*/
#include <stdio.h>
#define TAM 10
float calculoMedia(float array[]){
    float media, soma=0;
    for(int i=0;i<TAM;i++){
        soma += array[i];
    }
    return (media = (float)soma/TAM);
}

void leituraArray(float array[]){
    for(int i=0;i<TAM;i++){
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&array[i]);
    }
}

int main(){
    float notas[TAM];
    leituraArray(notas);
    printf("Media: %0.2f",calculoMedia(notas));
    return 0;
}
