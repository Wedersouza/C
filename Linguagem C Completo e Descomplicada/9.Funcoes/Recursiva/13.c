/*13) Faça uma função recursiva que calcule o valor da série S descrita a seguir para um
valor n maior do que zero a ser fornecido como parâmetro para a mesma*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma(int n){
    if(n==1){
        return 2;
    }else{
        return ((1+pow(n,2))/n+soma(n-1));
    }
}

int main(){
    printf("%f",soma(2));

    return 0;
}