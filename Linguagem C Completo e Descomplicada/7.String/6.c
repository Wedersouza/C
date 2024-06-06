/* 6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada
por esse caractere. Ao final, imprima a nova string e o número de vogais que ela
possui.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[256],c;
    int tam, num_vogais = 0;

    //Leitura da string
    printf("Digite a string: ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0'; //remove o caractere de nova linha

    //Leitura do caractere
    printf("Digite um caractere: ");
    c = getchar();

    //verificação das avogais na string
    tam = strlen(str); //atribui o tamanho da string
    for(int i=0;i<tam;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            str[i] = c;
            num_vogais++;

        }
    }

    printf("\nNova string: %s\nNumero de vogais: %d\n",str,num_vogais);

    return 0;
}
