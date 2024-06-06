/*15) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:*/

#include <stdio.h>
#include <stdlib.h>

float hn(int n){
    if(n==1){
        return 1;
    }else{
        return (1.0/n)+hn(n-1);
    }
}

int main(){
    printf("%f",hn(2));

    return 0;
}