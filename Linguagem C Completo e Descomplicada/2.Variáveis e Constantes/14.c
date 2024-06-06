//14) Faça um programa que leia três caracteres do tipo char e depois os imprima um
//em cada linha. Use um único comando printf() para isso.
#include <stdio.h>

int main(){
    char c1,c2,c3;

    printf("Digite 3 caracteres seperados por escpacos: ");
    scanf(" %c %c %c",&c1,&c2,&c3);

    printf("\nCaractere 1: %c\nCaractere 2: %c\nCaractere 3: %c\n",c1,c2,c3);

    return 0;
}

/*O espaço antes do %c é necessário pois quando você usa scanf() para ler um caractere após outra entrada, como um número ou uma string,
pode haver problemas de buffer de entrada. Por outro lado, para os formatos %d e %f, o espaço em branco não é necessário,
porque esses formatos consomem e descartam automaticamente todos os espaços em branco iniciais no buffer de entrada antes de converter os dados. */
