/*Questão 3. A gerente do cabeleireiro Sempre Bela tem uma tabela em
que registra os "pés" as "mãos" e o serviço de podologia das cinco manicures.
Sabendo-se que cada uma ganha 50% do que faturou ao mês, criar um algoritmo que possa calcular e
imprimir quanto cada um vai receber, uma vez
que não têm carteiras assinadas; os valores, respectivamente, são R$ 10,00;
R$ 15,00 e R$ 30,00.*/
#include <stdio.h>
#define TAM 5

typedef struct{
    int quant_pes;
    int quant_maos;
    int quant_pedologia;
    float total_bruto;
    float total_liquido;

}cad;

void menuInicial(){
    int opcao;

    while(1){
        system("cls"); //limpar a tela
        fflush(stdin); //limpar buffer

        //Exibir na tela
        printf("---------------------------\n");
        printf("       Menu Inicial\n");
        printf("---------------------------\n\n");
        printf(" 1. Inicio\n\n");
        printf(" 2. Fim\n\n");
        printf("---------------------------\n\n");

        //Leitura e validação de dados
        printf("Digite a opcao desejada: ");
        if(scanf("%d",&opcao)!=1 || opcao<1 || opcao>2){
            system("cls");
            printf("Entrada invalida: digite um numero valido!\n\n");
            system("pause");
            continue;
        }else{
            break;
        }
    }

    //Trata opção escolhida
    if(opcao==2){
        exit(0);
    }
}

void calcularFaturamento(cad manicure[]){
    int opcao;

    for(int i=0; i<TAM;i++){ //Percorrer as manicures
        for(int j=0;j<3;j++){ //Percorrer os campos
            while(1){
                system("cls"); //limpar a tela
                fflush(stdin); //limpar o buffer

                //Exibir na tela
                printf("---------------------------\n");
                printf("        Manicure %d\n",i+1);
                printf("---------------------------\n\n");
                if(j==0){
                    printf("Quantidade pes: ");
                    if(scanf("%d",&manicure[i].quant_pes)!=1 || manicure[i].quant_pes<0){
                        system("cls");
                        printf("Entrada invalida: digite numeros positivos\n\n");
                        system("pause");
                        continue;
                    }else{
                        break;
                    }
                }else if(j==1){
                    printf("Quantidade maos: ");
                    if(scanf("%d",&manicure[i].quant_maos)!=1 || manicure[i].quant_maos<0){
                        system("cls");
                        printf("Entrada invalida: digite numeros positivos\n");
                        system("pause");
                        continue;
                    }else{
                        break;
                    }
                }else if(j==2){
                    printf("Servicos de pedologia: ");
                    if(scanf("%d",&manicure[i].quant_pedologia)!=1 || manicure[i].quant_pedologia<0){
                        system("cls");
                        printf("Entrada invalida: digite numeros positivos\n\n");
                        system("pause");
                        continue;
                    }else{
                        break;
                    }
                }
            }

        }
    }
    system("cls");
    for(int i=0; i<TAM;i++){
        for(int i=0; i<TAM; i++){
            manicure[i].total_bruto = (manicure[i].quant_pes*10)+(manicure[i].quant_maos*15)+(manicure[i].quant_pedologia*30);
            manicure[i].total_liquido = manicure[i].total_bruto*0.5;

        }
    }
}


void imprimirFaturamento(cad manicure[]){
    //Exibir na tela
    printf("---------------------------\n");
    printf("  Faturamento Manicures\n");
    printf("---------------------------\n\n");
    for(int i=0; i<TAM;i++){
        printf(" %d. %0.2f\n\n",i+1,manicure[i].total_liquido);
    }
    printf("---------------------------\n\n");
}

int main(){
    cad manicure[TAM];
    menuInicial();
    calcularFaturamento(manicure);
    imprimirFaturamento(manicure);
}
