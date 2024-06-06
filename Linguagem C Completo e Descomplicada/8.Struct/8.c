/* 8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.*/
#include <stdio.h>
typedef struct{
    int d;
    int m;
    int a;
}data_nascimento;

typedef struct{
    char nome[256];
    data_nascimento nasc;
}cad;

int main(){
    cad pessoa[6];

    int mais_nova, mais_velha;

    for(int i=0;i<6;i++){
        printf("Pessoa %d\n",i+1);
        printf("Digite o seu nome: ");
        scanf("%s",pessoa[i].nome);
        setbuf(stdin,NULL);
        printf("Digite a data de nascimento(dd/mm/aa) :");
        scanf("%d/%d/%d",&pessoa[i].nasc.d,&pessoa[i].nasc.m,&pessoa[i].nasc.a);
        printf("\n");


        if( (pessoa[mais_nova].nasc.a>pessoa[i].nasc.a) ||
            (pessoa[mais_nova].nasc.a==pessoa[i].nasc.a && pessoa[mais_nova].nasc.m>pessoa[i].nasc.m)||
            (pessoa[mais_nova].nasc.a==pessoa[i].nasc.a && pessoa[mais_nova].nasc.m==pessoa[i].nasc.m&& pessoa[mais_nova].nasc.d>pessoa[i].nasc.d)||i==0){
            mais_nova = i;
        }

        if( (pessoa[mais_velha].nasc.a<pessoa[i].nasc.a) ||
            (pessoa[mais_velha].nasc.a==pessoa[i].nasc.a && pessoa[mais_velha].nasc.m<pessoa[i].nasc.m)||
            (pessoa[mais_velha].nasc.a==pessoa[i].nasc.a && pessoa[mais_velha].nasc.m==pessoa[i].nasc.m&& pessoa[mais_velha].nasc.d<pessoa[i].nasc.d)||i==0){
            mais_velha = i;
        }
    }
    printf("mais nova: %s\nmais velha: %s",pessoa[mais_nova].nome,pessoa[mais_velha].nome);
    printf("\n");

}
