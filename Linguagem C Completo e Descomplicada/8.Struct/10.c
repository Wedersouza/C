/*10) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
novo*/
#include <stdio.h>
#define TAM 5
typedef struct{
    char nome[256];
    char esporte[256];
    int idade;
    float altura;
}atleta;

int main(){
    atleta a[TAM];
    int mais_alto[TAM], mais_velho[TAM],aux;
    for(int i=0;i<TAM;i++){
        printf("Atleta %d\n",i+1);
        printf("Digite o nome: ");
        scanf("%s",a[i].nome);
        setbuf(stdin,NULL);
        printf("Digite o seu esporte:");
        scanf("%s",a[i].esporte);
        setbuf(stdin,NULL);
        printf("Digite a sua idade:");
        scanf("%d",&a[i].idade);
        printf("Digite a sua altura:");
        scanf("%f",&a[i].altura);
        printf("\n");
    }

    for(int i=0;i<TAM;i++){
        for(int j=i+1;j<TAM;j++){
            if(a[i].idade<a[j].idade){
                aux = a[i].idade;
                a[i].idade = a[j].idade;
                a[j].idade = aux;
            }
        }
    }
    printf("\n\nordem idade\n");
    for(int i=0;i<TAM;i++){
        printf("%d ",a[i].idade);
    }
    printf("\n\n");

    return 0;

}

