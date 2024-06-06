//14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
#include <stdio.h>

int main(){
    char c;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c",&c);
    if(c>='A'&&c<='Z'){
        c += 32;
        printf("\nConversao para minuscula: %c\n",c);

    }else{
        printf("Entrada invalida");
    }


    return 0;
}
