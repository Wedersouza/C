/*11) Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril*/
#include <stdio.h>
int main(){
    int m;
    printf("Digite o numero do mes: ");
    scanf("%d",&m);

    switch(m){
        case 1:
            printf("Mes: janeiro");
            break;
        case 2:
            printf("Mes: Fevereiro");
            break;
        case 3:
            printf("Mes: Marco");
            break;
        case 4:
            printf("Mes: Abril");
            break;
        case 5:
            printf("Mes: Maio");
            break;
        case 6:
            printf("Mes: Junho");
            break;
        case 7:
            printf("Mes: Julho");
            break;
        case 8:
            printf("Mes: Agosto");
            break;
        case 9:
            printf("Mes: Setembro");
            break;
        case 10:
            printf("Mes: Outubro");
            break;
        case 11:
            printf("Mes: Novembro");
            break;
        case 12:
            printf("Mes: Dezembro");
        break;

        default:
            printf("Numero invalido!");
    }
    printf("\n");
    return 0;
}
