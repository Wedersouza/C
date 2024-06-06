/*7) Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y
e calcule e retorne o resultado de x^y para o programa principal.*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int x,int y){
    if(y==0){
        return  1;
    }else if(y==1){
        return x;
    }else{
        return x*potencia(x,y-1);
    }
}

int main(){
    printf("%d",potencia(3,2));
    return 0;
}