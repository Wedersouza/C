//10) A import�ncia de R$780.000,00 ser� dividida entre tr�s ganhadores de um concurso, sendo que:
// i. O primeiro ganhador receber� 46% do total.
// ii. O segundo receber� 32% do total.
// iii. O terceiro receber� o restante.
//Calcule e imprima a quantia recebida por cada um dos ganhadores.

#include <stdio.h>
int main(){
    float total = 780000.00;
    float g1,g2,g3;

    g1 = total * 0.46;
    g2 = total * 0.32;
    g3 = total * 0.22;

    printf("O primeiro ganhador recebera %0.2f\nO segundo recebera %0.2f\nO terceiro recebera %0.2f\n",g1,g2,g3);
    return 0;
}
