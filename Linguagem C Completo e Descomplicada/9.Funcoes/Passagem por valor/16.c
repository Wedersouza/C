/*16) Elabore uma fun��o que receba como par�metro um valor inteiro n e gere como
sa�da um tri�ngulo lateral formado por asteriscos conforme o exemplo a seguir,
em que usamos n = 4:
 *
 **
 ***
 ****
 ***
 **
 *
*/

#include <stdio.h>

void triangulo(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(--i;i>0;i--){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    triangulo(4);
    return 0;
}
