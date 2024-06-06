/*7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso etc.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[256];
    int tam;

    printf("Digite uma palavra: ");
    scanf("%s",str);

    tam = strlen(str);

    //Converte as letras pra minusculo
    for(int i=0;i<tam;i++){
        str[i] = tolower(str[i]);
    }

    //Verifica se e um palindromo
    for(int i=0, j=(tam-1); i<(tam%2);i++,j++){
        if(str[i]!=str[j]){
            printf("%s nao e um palindromo",str);
            return 0;
        }
    }

    printf("%s e um palindromo",str);
    return 0;
}
