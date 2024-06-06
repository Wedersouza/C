/*O curso de informática de Gestão tem disciplinas com projeto obrigatório e
eliminatório (quem reprova no projecto reprova na disciplina). Para as
disciplinas anuais, os estudantes fazem: duas provas, P1 e P2; uma avaliação
do professor, AC; e o projecto (trabalho final da disciplina), Pj. A aprovação
na disciplina depende da obtecção de nota positiva na média final e no
projecto. A nota final da disciplina é calculada pela fórmula:
NF = 10%AC + 35%P1 + 35%P2 + 20% Pj.
Desenvolva um programa que leia o nome do aluno, as notas das avaliações,
calcule a respectiva média final    , e mostre a pauta para 10 alunos.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

typedef struct{
    char nome[256], resultado[10];
    float P1,P2,AC,PJ,NF;
}disciplina;


void Leitura(disciplina aluno[]){
    for(int i=0; i<TAM; i++){
        printf("Aluno %d\n",i+1);

        printf("Digite o nome: ");
        fgets(aluno[i].nome,sizeof(aluno[i].nome),stdin);
        aluno[i].nome[ strlen(aluno[i].nome)-1 ] = '\0';

        printf("Digite a nota da avaliacao do professor: ");
        scanf("%f",&aluno[i].AC);

        printf("Digite a nota da prova 1: ");
        scanf("%f",&aluno[i].P1);

        printf("Digite a nota da prova 2: ");
        scanf("%f",&aluno[i].P2);

        printf("Digite a nota do projeto da disciplina: ");
        scanf("%f",&aluno[i].PJ);
        printf("\n");
        setbuf(stdin, NULL);

        aluno[i].NF = 0.10*aluno[i].AC + 0.35*aluno[i].P1 + 0.35*aluno[i].P2 + 0.20*aluno[i].PJ;

        if(aluno[i].NF>0&&aluno[i].PJ>0){
            strcpy(aluno[i].resultado,"Aprovado");
        }else{
            strcpy(aluno[i].resultado,"Reprovado");
        }
    }
}

void Impressao(disciplina aluno[]){
    printf("Nome                AC    P1    P2    PJ    NF    Resultado\n");
    for(int i=0; i<TAM; i++){
        printf("%-20s%-6.1f%-6.1f%-6.1f%-6.1f%-6.1f%-10s\n",aluno[i].nome,aluno[i].AC,aluno[i].P1,aluno[i].P2,aluno[i].PJ,aluno[i].NF,aluno[i].resultado);
    }
}


int main(){
    disciplina aluno[TAM];
    Leitura(aluno);
    Impressao(aluno);
}

