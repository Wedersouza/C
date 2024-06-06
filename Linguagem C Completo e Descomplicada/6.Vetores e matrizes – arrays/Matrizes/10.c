/*10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior
nota foi na prova 3.*/

#include <stdio.h>
#define NUM_ALUNOS 10
#define NUM_PROVA 3
int main(){
    int matriz[NUM_ALUNOS][NUM_PROVA];

    //Entrada e validação de dados na matriz
    for(int i=0;i<NUM_ALUNOS;i++){
        for(int j=0;j<NUM_PROVA;j++){
            printf("Digite a nota do aluno %d na prova %d: ",i+1,j+1);
            if(scanf("%d",&matriz[i][j])!=1 || matriz[i][j]<0){
                printf("Entrada invalida!");
                return 1;
            }
        }
    }

    return 0;
}
