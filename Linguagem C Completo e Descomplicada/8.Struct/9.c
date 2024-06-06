/*9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.*/
#include <stdio.h>
typedef struct{
    char nome[256];
    char esporte[256];
    int idade;
    float altura;
}atleta;

int main(){
    atleta a[2];
    int mais_alto = 0, mais_velho = 0;
    for(int i=0;i<2;i++){
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


        if(a[i].idade>a[mais_velho].idade){
            mais_velho = i;
        }

        if(a[i].altura>a[mais_alto].altura){
            mais_alto = i;
        }
    }
    printf("mais alto: %s\nmais velho: %s",a[mais_alto].nome,a[mais_velho].nome);
    printf("\n");

    return 0;

}
