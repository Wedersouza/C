/* 1) Escreva uma fun��o que, dado um n�mero real passado como par�metro, retorne
a parte inteira e a parte fracion�ria desse n�mero por refer�ncia.*/
#include <stdio.h>
int calculo(float numero, float *parte_decimal){
    int parte_inteira = (int)numero;
    *parte_decimal = numero - parte_inteira;
    return parte_inteira;
}

int main(){
    float numero = 3.1, parte_decimal;
    int parte_inteira;
    parte_inteira = calculo(numero,&parte_decimal);
    printf("Numero: %0.2f\nParte inteira: %d\nParte decimal: %0.2f\n\n",numero,parte_inteira,parte_decimal);
}
