/*10) Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a operação que se deseja efetuar com os números. Assim, se o
símbolo for “+”, deverá ser realizada uma adição, se for “−”, uma subtração, se for
“/”, uma divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da operação para o programa principal.*/

#include <stdio.h>

int operacao(int n1,int n2, char operador){
    switch (operador){
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    case '/':
        return n1 / n2;
    default:
        return 1;
    }
}

int main(){
    printf("%d",operacao(1,2,'*'));
    return 0;
}
