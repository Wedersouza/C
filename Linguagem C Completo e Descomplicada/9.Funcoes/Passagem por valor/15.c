/*15) Elabore uma fun��o que receba como par�metro um valor inteiro n e gere como
sa�da n linhas com pontos de exclama��o, conforme o exemplo a seguir, em que
usamos n = 5:
 !
 !!
 !!!
 !!!!
 !!!!!*/

#include <stdio.h>
void pontos(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i;j++){
            printf("! ");
        }
        printf("\n");
    }
}


int main(){
    pontos(5);
    return 0;
}
