/*14) O c�digo de C�sar � uma das t�cnicas de criptografia mais simples e conhecidas.
� um tipo de substitui��o no qual cada letra do texto � substitu�da por outra,
que se apresenta n posi��es ap�s ela no alfabeto. Por exemplo, com uma troca de
tr�s posi��es, a letra A seria substitu�da por D, B se tornaria E e assim por diante.
Escreva um programa que fa�a uso desse c�digo de C�sar para tr�s posi��es. Entre
com uma string e imprima a string codificada. Exemplo:
 String: a ligeira raposa marrom saltou sobre o cachorro cansado
 Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str1[256],str2[256];

    printf("Digite a string: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strlen(str1)-1] = '\0';


    //Convers�o para minusculo
    for(int i=0; i<strlen(str1);i++){
        str1[i] = tolower(str1[i]);
    }

    for(int i=0;i<strlen(str1);i++){
        if(str1[i]>='a'&&str1[i]<='z'){
            if(str1[i]+3>'z'){
                str2[i] = 96 + ((str1[i])+3)-122;
            }else{
                str2[i] = str1[i]+3;
            }
        }else{
            str2[i] = str1[i]; //numeros e caractere que nao sao codificados
        }
    }
    printf("\nString: %s\nNova string: %s\n",str1,str2);
    return 0;
}
