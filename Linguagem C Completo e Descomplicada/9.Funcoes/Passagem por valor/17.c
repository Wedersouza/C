/*17) Fa�a uma fun��o que receba um inteiro N como par�metro. Calcule e retorne o
resultado da seguinte s�rie S:*/
#include <stdio.h>

float calculo_serie(int n){
    float S = 0;
    for(int i=1; i<=n; i++){
        S += (pow(i,2)+1)/(i+3);
    }
    return S;
}
int main(){
    printf("%0.2f",calculo_serie(2));
    return 0;
}
