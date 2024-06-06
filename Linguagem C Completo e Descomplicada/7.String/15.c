/*15) Escreva um programa que leia duas strings e as imprima em ordem alfabética, a
ordem em que elas apareceriam em um dicionário.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str1[256],str2[256];
    int i = 0;

    //Leitura de Strings
    printf("Digite a string 1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Digite a string 2: ");
    fgets(str2,sizeof(str2),stdin);
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';



    i = strcmp(str1,str2);
    if(i>0){
        printf("%s>%s\n", str1, str2);
    }else if(i<0){
        printf("%s>%s\n", str2, str1);
    }else{
        printf("As strings são iguais.\n");
    }

    return 0;
}
