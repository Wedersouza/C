/*2) Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do
teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o*/
#include <stdio.h>
int main(){
    int a,b;

    //Entrada e valida��o de dados
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


    //Compara��o
    if(&a>&b){
        printf("'a' possui o maior endereco\nEndereco de 'a': %p\nConteudo de 'a': %d\n\n",(void*)&a,a);
    }else{
        printf("'b' possui o maior endereco\nEndereco de 'b': %p\nConteudo de 'b': %d\n\n",(void*)&b,b);
    }
    return 0;
}
