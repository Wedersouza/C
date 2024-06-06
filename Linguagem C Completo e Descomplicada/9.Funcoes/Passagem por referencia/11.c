/*11) Escreva uma função que receba uma string e converta todos os seus caracteres
em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e
122.*/
#include <stdio.h>

void conversaoMaiusculo(char str[],int tam){
    for(int i=0;i<tam;i++){
        if(str[i]>=97&&str[i]<=122){
            str[i] -= 32;
        }
    }
}

void leituraString(char str[],int *tam){
    printf("Digite o valor da palavra: ");
    scanf("%s",str);
    *tam = strlen(str);
}
int main(){
    char str[256];
    int tam;

    leituraString(str,&tam);
    printf("\nPalavra antes de converter: %s\n",str);
    conversaoMaiusculo(str,tam);
    printf("Palavra depois de converter: %s\n",str);
    return 0;
}


