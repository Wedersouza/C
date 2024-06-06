/*2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço*/
#include <stdio.h>
int main(){
    int a,b;

    //Entrada e validação de dados
    printf("Digite o valor de a: ");
    if(scanf("%d",&a) !=1){
        printf("Entrada invalida!\n");
        return 1;
    }
    printf("Digite o valor de b: ");
    if(scanf("%d",&b)!=1){
        printf("Entrada invalida!\n");
        return 1;
    }
    printf("\n\n");


    //Comparação
    if(&a>&b){
        printf("'a' possui o maior endereco\nEndereco de 'a': %p\nConteudo de 'a': %d\n\n",(void*)&a,a);
    }else{
        printf("'b' possui o maior endereco\nEndereco de 'b': %p\nConteudo de 'b': %d\n\n",(void*)&b,b);
    }
    return 0;
}
