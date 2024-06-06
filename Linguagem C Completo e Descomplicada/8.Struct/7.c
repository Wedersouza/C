/* 7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/
#include <stdio.h>
typedef struct{
    int horas;
    int minutos;
    int segundos;
}hora;

int main(){
    hora h[5];
    int maior_hr,total, aux;
    for(int i=0;i<5;i++){
        printf("Horas %d\n",i+1);
        printf("Digite as horas: ");
        scanf("%d",&h[i].horas);
        printf("Digite os minutos: ");
        scanf("%d",&h[i].minutos);
        printf("Digite os segundos: ");
        scanf("%d",&h[i].segundos);
        printf("\n");

        aux = (h[i].horas*60*60) + (h[i].minutos*60) + (h[i].segundos);
        if(total<aux||i==0){
            total = aux;
            maior_hr = i;
        }
    }
    printf("Maior horario \nRelogio %d: %d:%d:%d",maior_hr+1,h[maior_hr].horas,h[maior_hr].minutos,h[maior_hr].segundos);
    printf("\n");

}
