#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAM 3

void jogar();
void menuInicial();
void exibirTabuleiro(char pecas[TAM][TAM]);
bool verificarVitoria(char pecas[TAM][TAM], int linha, int coluna);

int main() {
    menuInicial();
    return 0;
}

void jogar() {
    char pecas[TAM][TAM] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int jogador = 1;
    int jogadas = 0;

    while (1) {
        system("cls");
        printf("--------------------------\n");
        printf("\t Jogador %d\n", jogador);
        printf("--------------------------\n\n");
        exibirTabuleiro(pecas);

        int linha, coluna;
        printf("Digite a linha e a coluna (1-3): ");
        scanf("%d %d", &linha, &coluna);
        linha--;
        coluna--;

        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM || pecas[linha][coluna] != ' ') {
            printf("Jogada inválida! Tente novamente.\n");
            system("pause");
            continue;
        }

        pecas[linha][coluna] = (jogador == 1) ? 'X' : 'O';
        jogadas++;

        if (verificarVitoria(pecas, linha, coluna)) {
            system("cls");
            printf("--------------------------\n");
            printf("|       Vencedor: %d      |\n", jogador);
            printf("--------------------------\n");
            exibirTabuleiro(pecas);
            break;
        }

        if (jogadas == TAM * TAM) {
            printf("Empate!\n");
            break;
        }

        jogador = (jogador % 2) + 1;
    }
    system("pause");
}

void menuInicial() {
    int opcao;

    while (1) {
        system("cls");
        printf("--------------------------\n");
        printf("|      Jogo da Velha     |\n");
        printf("--------------------------\n");
        printf("|     1 - Jogar          | \n");
        printf("|     2 - Sobre          |\n");
        printf("|     3 - Sair           | \n");
        printf("--------------------------\n\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                jogar();
                break;
            case 2:
                // sobre();
                break;
            case 3:
                exit(0);
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }
}

void exibirTabuleiro(char pecas[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %c ", pecas[i][j]);
            if (j < TAM - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < TAM - 1) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

bool verificarVitoria(char pecas[TAM][TAM], int linha, int coluna) {
    // Verificar linha
    if (pecas[linha][0] == pecas[linha][1] && pecas[linha][1] == pecas[linha][2]) {
        return true;
    }
    // Verificar coluna
    if (pecas[0][coluna] == pecas[1][coluna] && pecas[1][coluna] == pecas[2][coluna]) {
        return true;
    }
    // Verificar diagonal principal
    if (linha == coluna && pecas[0][0] == pecas[1][1] && pecas[1][1] == pecas[2][2]) {
        return true;
    }
    // Verificar diagonal secundária
    if (linha + coluna == 2 && pecas[0][2] == pecas[1][1] && pecas[1][1] == pecas[2][0]) {
        return true;
    }
    return false;
}