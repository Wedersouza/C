/* 7) Elabore uma fun��o que receba tr�s n�meros inteiros como par�metro, representando horas, minutos e segundos. A fun��o deve retornar esse hor�rio convertido
em segundos./*/

#include <stdio.h>
int conversao_horas(int h,int m,int s){
    int segundos = (h*60*60)+(m*60)+s;
    return segundos;
}

int main(){
    printf("%d",conversao_horas(1,0,0));
}
