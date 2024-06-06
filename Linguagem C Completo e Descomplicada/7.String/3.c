/*3) Sem usar a função strlen(), faça um programa que leia uma string e imprima
quantos caracteres ela possui.*/
#include <stdio.h>
int main(){
    char str[256];
    int i=0;
    printf("Digite uma string: ");

    //Leitura da string
    fgets(str,sizeof(str),stdin);

    //Calculo da quantidade de caracteres de um String
    while(str[i]!='\n'&&str[i]!='\0'){
        i++;
    }

    if(i==0){
        printf("A string esta vazia");
    }else{
        printf("\nTamanho da string: %d\n",i);
    }
    return 0;
}
