#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define TAM 3

void jogar(){
    char pecas[TAM][TAM] = {{' ', ' ', ' '},{' ', ' ', ' '},{ ' ', ' ', ' '}};
    int L, C, fim = 0, jogador;

    for (int i = 0; i < 9 && fim == 0; i++) {
        while (1){
            fflush(stdin); // limpar buffer
            system("cls"); // limpar tela
            jogador = (i % 2) + 1;

            // Exibir a tela
            printf("--------------------------\n");
            printf("\t Jogador %d\n",jogador );
            printf("--------------------------\n\n");
            printf("\t %c | %c | %c\n", pecas[0][0], pecas[0][1], pecas[0][2]);
            printf("\t- - - - - -\n");
            printf("\t %c | %c | %c\n", pecas[1][0], pecas[1][1], pecas[1][2]);
            printf("\t- - - - - -\n");
            printf("\t %c | %c | %c\n\n", pecas[2][0], pecas[2][1], pecas[2][2]);
            printf("--------------------------\n\n");

            // Entrada e validacao de dados
            // 1. Linha
            printf("Digite a linha: ");
            if (scanf("%d", &L) != 1){
                fflush(stdin); // limpar o buffer
                system("cls"); // limpar a tela
                printf("Entrada  invalida! \n");
                system("pause");
            }else if (L < 1 || L > 3){
                fflush(stdin); // limpar o buffer
                system("cls"); // limpar a tela
                printf("Entrada  invalida! \n");
                system("pause");
                ;
            }else{
                --L;
            }
            // 2. Coluna
            printf("Digite a coluna: ");
            if (scanf("%d", &C) != 1){
                fflush(stdin); // limpar o buffer
                system("cls"); // limpar a tela
                printf("Entrada  invalida: tente novamente... \n");
                system("pause");
                continue;
            }else if (C < 1 || C > 3){
                fflush(stdin); // limpar o buffer
                system("cls"); // limpar a tela
                printf("Entrada  invalida: tente novamente... \n");
                system("pause");
                continue;
            }else{
                --C;
            }

            // Verificar se ja foi preenchido
            if (pecas[L][C] != ' '){
                setbuf(stdin, NULL);
                system("cls");
                printf("Posicao escolhida ja ocupada... \n\n");
                system("pause");
                continue;
            }else{ // Caso nao esteja, preenche
                //Preencher 
                if (jogador == 1){
                    pecas[L][C] = 'X';
                }else{
                    pecas[L][C] = 'O';
                }

                //Verificar se alguem vencer
                //horizontal
                if(pecas[L][0]==pecas[L][1] && pecas[L][1]==pecas[L][2]){
                    fim = 1;
                } 
                if(pecas[0][C]==pecas[1][C] && pecas[1][C]==pecas[2][C]){
                    fim = 1;
                } 

                if(L==C){
                    if(pecas[0][0]==pecas[1][1] && pecas[1][1]==pecas[2][2]){
                        fim = 1;
                    }
                }
                if((L==1&&C==3) || (L==3&&C==1)){
                    if(pecas[1][3]==pecas[2][2] && pecas[2][2]==pecas[3][1]){
                        fim = 1;
                    }
                }
                break;
            }
        }
    }
    system("cls");
    printf("--------------------------\n");
    printf("|       Vencedor: %d      |\n",jogador);
    printf("--------------------------\n");
    printf("\t %c | %c | %c\n", pecas[0][0], pecas[0][1], pecas[0][2]);
    printf("\t- - - - - -\n");
    printf("\t %c | %c | %c\n", pecas[1][0], pecas[1][1], pecas[1][2]);
    printf("\t- - - - - -\n");
    printf("\t %c | %c | %c\n\n", pecas[2][0], pecas[2][1], pecas[2][2]);
    printf("--------------------------\n\n");
    system("pause");
    system("cls");
}
void menuInicial(){
    int opcao;

    while (1){
        system("cls"); // limpar a tela
        fflush(stdin); // limpar o buffer

        // Exibir o menu inicial
        printf("--------------------------\n");
        printf("|      Jogo da Velha     |\n");
        printf("--------------------------\n");
        printf("|     1 - Jogar          | \n");
        printf("|     2 - Sobre          |\n");
        printf("|     3 - Sair           | \n");
        printf("--------------------------\n\n");

        // Entrada e validacao de dados
        if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 3){   // caso a entrada seja invalida
            fflush(stdin); // limpar o buffer
            system("cls"); // limpar a tela
            printf("Entrada invalida: tente novamente...\n\n");
            system("pause");
            continue;
        }

        // Opçoes de entrada
        if (opcao == 1){
            jogar();
        }else if (opcao == 2){
            system("cls");
            printf("----------------------------------------------------\n");
            printf("|                  Sobre o Jogo                    |\n");
            printf("----------------------------------------------------\n");
            printf("O Jogo da Velha e um jogo para dois jogadores, X e O\n");
            printf("que alternadamente marcam os espacos em um tabuleiro\n");
            printf("3x3. O jogador que conseguir colocar tres de suas \nmarcas");
            printf("em uma linha horizontal, vertical ou diagonal \nganha o jogo.\n");
            printf("----------------------------------------------------\n\n");
            system("pause");
        }else{
            exit(0);
        }
    }
}

int main(){
    menuInicial();
    return 0;
}
