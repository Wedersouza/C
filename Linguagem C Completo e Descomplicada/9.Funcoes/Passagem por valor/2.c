/*2) Fa�a uma fun��o que receba um n�mero inteiro de 1 a 12 e imprima em tela o
m�s e a sua quantidade de dias de acordo com o n�mero digitado pelo usu�rio.
Exemplo: Entrada = 4. Sa�da = abril.*/
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
