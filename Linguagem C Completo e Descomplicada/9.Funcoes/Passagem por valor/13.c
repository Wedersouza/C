/*13) Escreva uma fun��o que receba um n�mero inteiro positivo n. Calcule e retorne
o somat�rio de 1 at� n: 1 + 2 + 3 + ... + n*/
#include <stdio.h>
int fatorial(int n){
    int f=1;
    for(int i=n; i>0 ;i--){
        f *= i;
    }
    return f;
}


int main(){
    printf("%d",fatorial(3));
    return 0;
}
