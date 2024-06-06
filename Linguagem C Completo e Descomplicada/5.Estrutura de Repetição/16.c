/*16) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
Apresente um programa que calcule o valor de qualquer Hn.
*/

#include <stdio.h>
int main(){
    int n;
    float hn = 0;

    printf("Digite o enesimo termo da serie harmonico: ");
    scanf("%d",&n);

    for(int i=1; i<=n;i++){
        hn += 1.0/i;
    }

    printf("%d termo da serie harmonico: %0.2f",n,hn);
    return 0;
}
