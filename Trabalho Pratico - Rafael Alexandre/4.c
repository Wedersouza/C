/*Questão 4. A matriz dados contém na 1a coluna a matrícula do aluno no curso; na 2a, o sexo (0 para feminino e 1 para masculino);
 na 3a, o código do curso, e na 4a, o CR (Coeficiente de Rendimento). Suponha 10 alunos e que o CR é um número inteiro.
Faça um algoritmo que armazene esses dados sabendo-se que:
(a) O código do curso é uma parte de um número de matrícula: aasccccnnn (aa ano, s semestre, ccc código do curso e nnn matrícula
no curso), que deve ser lido;
(b) o sexo e o CR devem ser lidos também.
(c) Um grupo empresarial resolveu premiar a aluna com CR mais alto
de um curso cujo código deverá ser digitado.
*/

#include <stdio.h>
#include <stdlib.h>

#define L 10
#define C 4

void leituraMatriz(int aluno[][C]){
    for(int i=0; i<L; i++){
        for(int j=1; j<C; j++){
            while(1){
                system("cls"); //limpar tela
                fflush(stdin); //limpar buffer

                //Exibir
                printf("---------------------------\n");
                printf("          Aluno %d\n",i+1);
                printf("---------------------------\n\n");

                //Entrada e validação de dados

                if(j==1){
                    printf("Digite a sexo (0 fem/ 1 masc): ");
                    if(scanf("%d",&aluno[i][j])!=1 || aluno[i][j]<0 || aluno[i][j]>1){
                        system("cls");
                        printf("Entrada invalida: digite numeros positivos\n\n");
                        system("pause");
                        continue;
                    }
                }

                if(j==2){
                    printf("Digite o codigo do curso: ");
                    if(scanf("%d",&aluno[i][j])!=1){
                        system("cls");
                        printf("Entrada invalida: digite numeros positivos\n\n");
                        system("pause");
                        continue;
                    }
                }

                if(j==3){
                    printf("Digite o CR do curso: ");
                    if(scanf("%d",&aluno[i][j])!=1){
                        system("cls");
                        printf("Entrada invalida: digite numeros positivos\n\n");
                        system("pause");
                        continue;
                    }
                }

                system("cls");
                break;
            }
        }
    }
}


int main(){
    int aluno[L][C];
    leituraMatriz(aluno);

    return 0;
}
