// 6) Leia uma velocidade em km/h (quil�metros por hora) e apresente convertida em m/s (metros por segundo).
//A f�rmula de convers�o � M = K/36, sendo K a velocidade em km/h e M em m/s.
#include <stdio.h>

int main(){
    float k;

    printf("Digite a velocidade(km/h): ");
    scanf("%f",&k);
    printf("Velocidade(m/s): %0.2f\n ",k/3.6);
    return 0;
}
