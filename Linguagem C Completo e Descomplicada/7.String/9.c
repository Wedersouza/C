/*9) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando quantas vezes a segunda string lida está contida dentro da primeira.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str1[256],str2[256];
    int tam1,tam2,quant=0;

    //Leitura das strings
    printf("Digite a string 1: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strlen(str1)-1] = '\0';
    printf("Digite a string 2: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strlen(str2)-1] = '\0';

    tam1 = strlen(str1);
    tam2 = strlen(str2);

    //Conversao para minusculo
    for(int i=0; i<tam1; i++){
        str1[i] = tolower(str1[i]);
    }
    for(int i=0; i<tam2; i++){
        str2[i] = tolower(str2[i]);
    }


    //Verificação
    int i=0,j=0;
    while(i<=(tam1-tam2)){
        if(str1[i+j]==str2[j]){
            j++;
            if(j==tam2){
                quant++;
                j=0;
                i++;
            }
        }else{
            j=0;
            i++;
        }
    }
    if(quant==0){
        printf("A string %s nao esta contida",str2);
    }else{
        printf("A string %s esta contida %d vezes",str2,quant);
    }
    return 0;
}
