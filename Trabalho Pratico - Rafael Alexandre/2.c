    /*Questão 2. Uma floricultura conhecedora de sua clientela gostaria de fazer um algoritmo que pudesse controlar sempre um
 estoque mínimo de determinadas plantas, pois todo dias, pela manhã, o dono faz novas aquisições.
  Criar um algoritmo que deixe cadastrar 50 tipos de plantas e nunca deixar o estoque ficar abaixo do ideal.
  Para cada planta, o dono gostaria de cadastrar o nome, o estoque ideal e a quantidade em estoque.
  Dessa forma o algoritmo pode calcular a quantidade que o dono da loja precisa comprar no próximo dia.
  Essa quantidade a ser comprada deve ser impressa (quando maior que zero) como uma lista para o dono da floricultura.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

typedef struct{
    char nome[25];
    int estoque_ideal;
    int estoque_atual;
}cad;

int menuInicial(){
    int opcao = 0;

    do{
        printf("----------------------------\n");
        printf("         Menu inicial\n");
        printf("----------------------------\n\n");
        printf("1. Iniciar cadastro\n\n");
        printf("2. Sair\n\n");
        printf("--------------------------\n\n");
        printf("Escolha: ");

        //Validação de entrada
        if(scanf("%d",&opcao)!=1){
            system("cls");
            printf("\nEntrada invalida: insira um numero!\n\n");
            system("pause");
            system("cls");
            fflush(stdin);
        }else if(opcao<=0 || opcao>=3){
            system("cls");
            printf("\nEntrada invalida: insira 1 ou 2!\n\n");
            system("pause");
            system("cls");
        }else{
            break;
        }
    }while(1);


    system("cls");

    return opcao;
}

void lerCad(cad planta[]){
    for(int i=0;i<TAM;i++){
        printf("----------------------------\n");
        printf("\t  Planta %d\n",i+1);
        printf("----------------------------\n\n");
        printf("Digite o nome: ");
        fflush(stdin);
        fgets(planta[i].nome,25,stdin);
        planta[i].nome[strlen(planta[i].nome)-1] = '\0';

        printf("Digite o estoque ideal: ");
        scanf("%d",&planta[i].estoque_ideal);
        printf("Digite o estoque atual: ");
        scanf("%d",&planta[i].estoque_atual);
        system("cls");
    }
    printf("Cadastro finalizado.\n\n");
    system("pause");
    system("cls");

}

int menuIntermediario(){
    int opcao = 0;

    do{
        printf("----------------------------\n");
        printf("  Gerenciamento de Estoque\n");
        printf("----------------------------\n\n");
        //printf("1. Atualizar cadastro\n\n");
        printf("1. Verificar reposicao\n\n");
        printf("2. Sair\n\n");
        printf("--------------------------\n\n");
        printf("Escolha: ");

        //Validação de entrada
        if(scanf("%d",&opcao)!=1){
            system("cls");
            printf("\nEntrada invalida: insira um numero!\n\n");
            system("pause");
            system("cls");
            fflush(stdin);
        }else if(opcao<=0 || opcao>=3){
            system("cls");
            printf("\nEntrada invalida: insira 1 ou 2!\n\n");
            system("pause");
            system("cls");
        }else{
            break;
        }
    }while(1);


    system("cls");
    return opcao;
}

void verificarReposicao(cad planta[]){
    int necessidade=0;

    printf("--------------------------\n");
    for(int i=0;i<TAM;i++){
        if(planta[i].estoque_atual<planta[i].estoque_ideal){
            if(necessidade==0){
                printf("Lista Reposicoes\n");
                necessidade = 1;
            }
            printf("- %s\n",planta[i].nome);
        }
    }
    if(!necessidade){
        printf("Nenhuma reposicao necessaria.\n");
    }
    printf("--------------------------\n");
}

int main(){
    cad planta[TAM];
    int opcao;

    if(!menuInicial()){
        return 0;
    }else{
        lerCad(planta);
    }

    opcao = menuIntermediario();
    if(opcao == 1){
        verificarReposicao(planta);
    }else if(opcao==2){
        return 0;
    }
    return 0;
}
