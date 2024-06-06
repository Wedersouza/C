/* 6) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.*/
#include <stdio.h>
#define TAM 2
typedef struct{
    int matricula;
    char nome[256];
    float notas[3];
}cadastro;

int main(){
    int maior_nota;
    float media, soma = 0;
    cadastro aluno[TAM];

    for(int i=0;i<TAM;i++){
        printf("Aluno %d\n",i+1);
        printf("Digite o nome: ",i+1);
        scanf("%s",aluno[i].nome);
        setbuf(stdin,NULL);
        printf("Digite a matricula: ",i+1);
        scanf("%d",&aluno[i].matricula);
        printf("Digite a nota da prova 1: ");
        scanf("%f",&aluno[i].notas[0]);
        printf("Digite a nota da prova 2: ");
        scanf("%f",&aluno[i].notas[1]);
        printf("Digite a nota da prova 3: ");
        scanf("%f",&aluno[i].notas[2]);
        printf("\n");

        for(int j=0, soma=0;j<3;j++){
            soma += aluno[i].notas[j];
        }
        if(media<=(soma/3)||i==0){
            media = soma/3;
            maior_nota = i;
        }
    }

    printf("Maior media e de %s",aluno[maior_nota].nome);


}
