/*
15) Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa
que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.
 * 
TIPO        DESCRIÇÃO               RENDIMENTO MENsAL
1           Poupança                3%
2           Fundos de renda fixa    4%
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float valor, rendimento, valorFuturo;

    printf("Valor: ");
    scanf("%f", &valor);

    printf("=== Tipo de investimento ===\n");
    printf("[1] Poupanca\n"
           "[2] Fundos de renda fixa\n"
           "Opcao: ");
    scanf("%i", &i);

    switch(i){
        case 1:
            rendimento = 0.03;
            break;
        case 2:
            rendimento = 0.04;
            break;
        default:
            printf("Opcao invalida!!!");
            break;
    }

    valorFuturo = (1 + rendimento) * valor;

    printf("Com o rendimento de %.f%% mensal, voce tera, apos um mes, R$%.2f", rendimento * 100, valorFuturo);

    return(0);
}