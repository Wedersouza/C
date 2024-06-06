/*1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida*/
#include <stdio.h>
typedef struct{
    char rua[256];
    int numero;
}endereco;


typedef struct{
    char nome[256];
    int idade;
    endereco end;
}dados;

int main(){
    dados c;
    printf("Digite o seu nome: ");
    scanf("%s",c.nome);
    setbuf(stdin,NULL);
    printf("Digite a sua idade: ");
    scanf("%d",&c.idade);
    printf("Digite a sua rua: ");
    scanf("%s",c.end.rua);
    setbuf(stdin,NULL);
    printf("Digite o numero da sua casa: ");
    scanf("%d",&c.end.numero);

    printf("\n\nNome: %s\nIdade: %d\nrua: %s\nnumero: %d",c.nome,c.idade,c.end.rua,c.end.numero);

    return 0;
}

