/*8) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando se a segunda string lida está contida dentro da primeira.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    char str1[256],str2[256];
    int tam_str1,tam_str2;

    //Leitura da string
    printf("Digite a string 1: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strlen(str1)-1] = '\0'; //remove o caractere de nova linha
    printf("Digite a string 2: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strlen(str2)-1] = '\0'; //remove o caractere de nova linha

    tam_str1 = strlen(str1); //tamanho da string 1
    tam_str2 = strlen(str2); //tamanho da string 2

    //Conversão para minusculo
    for(int i=0; i<tam_str1;i++){
        str1[i] = tolower(str1[i]);
    }
    for(int i=0; i<tam_str2;i++){
        str2[i] = tolower(str2[i]);
    }


    //Verificação
    int i=0,j=0;
    while(i<=(tam_str1-tam_str2) && j!=tam_str2){
        if(str1[i+j]==str2[j]){
            j++;
        }else{
            j = 0;
            i++;
        }
    }


    if(j==tam_str2){
        printf("String %s esta contida em %s",str2,str1);
    }else{
        printf("String %s nao esta contida em %s",str2,str1);

    }

    return 0;
}
