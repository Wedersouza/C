#include <stdio.h>
struct endereco{
    char nome[256];
    int numero;
};


struct cadastro{
    char nome[256];
    int idade;
    struct endereco end1;
};


int main(){
    struct cadastro cad1;
    printf("Digite o nome da rua: ");
    scanf("%s",cad1.end1.nome);
    printf("Digite o numero da sua: ");
    scanf("%d",&cad1.end1.numero);
    printf("\nNome: %s\nIdade: %d",cad1.end1.nome,cad1.end1.numero);
}
