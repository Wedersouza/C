/* 7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar
os caracteres das strings.*/
#include <stdio.h>
#include <string.h>

void comp_str(char *str1, char *str2){
    char* ocorrencia;
    ocorrencia = strstr(str1,str2);

    if(ocorrencia==NULL){
        printf("A string '%s' nao esta contida em '%s'\n",str2,str1);
    }else{
        printf("A string '%s' esta contida em '%s'\n",str2,str1);
    }

}


int main(){
    char str1[256],str2[256];

    printf("Digite a string 1: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strlen(str1)-1] = '\0';

    printf("Digite a string 2: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strlen(str2)-1] = '\0';
    comp_str(str1,str2);

    return 0;
}
