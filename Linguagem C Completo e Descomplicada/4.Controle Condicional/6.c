/*6) Faça um programa+ que receba a altura e o sexo de uma pessoa e calcule e mostre//
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/
#include <stdio.h>
#include <ctype.h>
int main() {
  float altura, pesoIdeal;
  char sexo;
  printf("Digite a sua altura (em metros): ");
  scanf("%f", &altura);
  getchar();
  if (altura <= 0) {
    printf("Entrada inválida: altura negativa\n");
    return 0;
  }

  printf("Digite o seu sexo biológico (m/f): ");
  sexo = tolower(getchar());
  if (sexo != 'm' && sexo != 'f') {
    printf("Entrada de caractere inválida\n");
    return 0;
  }

  if (sexo == 'm') {
    pesoIdeal = (72.7 * altura) - 58;
  } else if (sexo == 'f') {
    pesoIdeal = (62.1 * altura) - 44.7;
  }

  printf("\nSeu peso ideal: %.2f kg\n", pesoIdeal);

  return 0;
}
