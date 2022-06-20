/*
6) Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
    || o valor total das compras à vista;
    || o valor total das compras a prazo;
    || o valor total das compras efetuadas; e
    || o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. 
 */

#include <stdio.h>

#define quantidadeDeTransacoes 15

int main(){
    int i;
    char resposta;
    float valorVista = 0, valorPrazo = 0, valorTransacao, valorTotal = 0, valorPrimeiraPrestacao = 0;

    for(i=0; i<quantidadeDeTransacoes; i++){
        printf("Valor da transacao: R$");
        scanf("%f", &valorTransacao);

        valorTotal += valorTransacao;

        printf("Essa transacao sera a vista [v] ou a prazo [p]: ");
        scanf(" %c", &resposta);

        if(resposta == 'v'){
            valorVista += valorTransacao;
        }
        else if(resposta == 'p'){
            valorPrazo += valorTransacao;
        }
    }

    valorPrimeiraPrestacao = valorPrazo / 3;

    printf(
        "\no valor total das compras a vista: R$%.2f"
        "\no valor total das compras a prazo: R$%.2f"
        "\no valor total das compras efetuadas: R$%.2f"
        "\no valor da primeira prestacao das compras a prazo juntas: R$%.2f", 
        valorVista, valorPrazo, valorTotal, valorPrimeiraPrestacao
    );

    return(0);
}