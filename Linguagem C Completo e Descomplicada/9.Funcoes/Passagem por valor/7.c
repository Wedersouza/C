/* 7) Elabore uma função que receba três números inteiros como parâmetro, representando horas, minutos e segundos. A função deve retornar esse horário convertido
em segundos./*/

#include <stdio.h>
int conversao_horas(int h,int m,int s){
    int segundos = (h*60*60)+(m*60)+s;
    return segundos;
}

int main(){
    printf("%d",conversao_horas(1,0,0));
}
