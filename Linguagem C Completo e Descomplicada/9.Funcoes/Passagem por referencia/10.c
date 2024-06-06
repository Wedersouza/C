/*10) Escreva uma função que receba uma string e retorne se ela é um palíndromo (1)
ou não (0). Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos:
ovo, arara, rever, asa, osso etc.*/
#include <stdio.h>
#include <string.h>

int palindromo(char str[],int tam){

    for(int i=0,j=tam-1; i<(tam/2);i++,j--){
        if(str[i]!=str[j]){
            return 0;
        }
    }
    return 1;
}

void leituraString(char str[],int *tam){
    printf("Digite o valor da palavra: ");
    scanf("%s",str);
    *tam = strlen(str);
}

int main(){
    char str[256];
    int tam,b;

    leituraString(str,&tam);
    b = palindromo(str,tam);
    if(b==0){
        printf("A palavra %s nao e um palindromo",str);
    }else{
        printf("A palavra %s e um palindro",str);
    }

}

