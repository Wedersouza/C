/*11) Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule
e retorne o resultado de x^y para o programa principal. Não use nenhuma função
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
