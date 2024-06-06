/*Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
Calcule e retorne o IMC (índice de massa corporal) dessa pessoa:
 IMC = peso/(altura * altura)*/
 #include <stdio.h>
 float calculo_imc(float p,float h){
    float imc = p/(h*h);
    return imc;
 }
int main(){
    printf("%0.2f",calculo_imc(1,2));
    return 0;
}
