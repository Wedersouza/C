/*7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
de erro.
Estado MG SP RJ MS
Imposto 7% 12% 15% 8%
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    float vi,vf,imposto;
    char d1, d2;


    printf("Digite o valor do produto: ");
    scanf("%f",&vi);
    printf("Digite o estado: (MG/SP/RJ/MS");
    scanf(" %c%c",&d1,&d2);

    d1 = tolower(d1);
    d2 = tolower(d2);

    if(d1=='m'&&d2=='g'){
        imposto = vi * 0.07;
    }else if(d1=='s'&&d2=='p'){
        imposto = vi * 0.12;
    }else if(d1=='r'&&d2=='j'){
        imposto = vi * 0.15;
    }else if(d1=='m'&&d2=='s'){
        imposto = vi * 0.08;
    }else{
        printf("\nEstado invalido!");
        return 0;
    }
    vf = vi + imposto;
    printf("preco final do produto: %0.2f",imposto,vf);
    return 0;
}
