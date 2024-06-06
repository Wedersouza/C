/*8) A multiplicação de dois números inteiros pode ser feita através de somas sucessivas
(por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
    if(y==1){
        return x;
    }else{
        return x+soma(x,y-1);
    }
}

int main(){
    printf("%d",soma(5,2));
    return 0;
}