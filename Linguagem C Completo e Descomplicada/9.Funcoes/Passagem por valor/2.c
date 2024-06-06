/*2) Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = abril.*/
#include <stdio.h>

void mes(int numero){
    char meses[][12] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    printf("Mes: %s",meses[--numero]);
    return;
}

int main(){
    mes(1);
    return 0;
}
