//14) Fa�a um programa que leia tr�s caracteres do tipo char e depois os imprima um
//em cada linha. Use um �nico comando printf() para isso.
#include <stdio.h>

int main(){
    char c1,c2,c3;

    printf("Digite 3 caracteres seperados por escpacos: ");
    scanf(" %c %c %c",&c1,&c2,&c3);

    printf("\nCaractere 1: %c\nCaractere 2: %c\nCaractere 3: %c\n",c1,c2,c3);

    return 0;
}

/*O espa�o antes do %c � necess�rio pois quando voc� usa scanf() para ler um caractere ap�s outra entrada, como um n�mero ou uma string,
pode haver problemas de buffer de entrada. Por outro lado, para os formatos %d e %f, o espa�o em branco n�o � necess�rio,
porque esses formatos consomem e descartam automaticamente todos os espa�os em branco iniciais no buffer de entrada antes de converter os dados. */
