/*3) Escreva uma fun��o que receba por par�metro uma temperatura em graus Fahrenheit
e a retorne convertida em graus Celsius. A f�rmula de convers�o �: C = (F � 32.0) *
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
#include <stdio.h>
float ConverterTemperatura(int C){
    float F;
    F = (C - 32.0)*(5.0/9.0) ;
    return F;
}
int main(){
    printf("%0.2f",ConverterTemperatura(100));
    return 0;
}cal
