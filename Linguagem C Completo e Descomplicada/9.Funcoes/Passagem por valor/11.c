/*11) Escreva uma fun��o que receba por par�metros dois valores inteiros x e y e calcule
e retorne o resultado de x^y para o programa principal. N�o use nenhuma fun��o
pronta para isso.*/
#include <stdio.h>
int potencia(int base, int expoente){
    int p = 1;
    for(int i=1; i<=expoente;i++){
        p *= base;
    }
    return p;
}

int main(){
    printf("%d",potencia(2,2));
    return 0;
}
