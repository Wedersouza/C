/*9) Elabore uma fun��o que receba tr�s notas de um aluno como par�metros e uma
letra. Se a letra for �A�, a fun��o dever� calcular a m�dia aritm�tica das notas do
aluno; se for �P�, dever� calcular a m�dia ponderada, com pesos 5, 3 e 2. Retorne
a m�dia calculada para o programa principal.*/
#include <stdio.h>
float media(int nota1,int nota2, int nota3, char letra){
    if(letra=='A'){
        return (nota1+nota2+nota3)/3;
    }else if(letra=='P'){
        return ( ((nota1*5)+(nota2*3)+(nota3*2)) / (5+3+2)  );
    }
}

int main(){
    printf("%0.2f",media(1,1,1,'P'));
    return 0;
}
