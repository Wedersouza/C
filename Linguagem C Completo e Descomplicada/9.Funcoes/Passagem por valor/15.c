/*15) Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que
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
