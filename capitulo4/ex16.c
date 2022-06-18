/*
 16) Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.
 * 
PREÇO ATUAL                    % DE DESCONTO
Até R$ 30,00                    Sem desconto
Entre R$ 30,00 e R$ 100,00      10%
Acima de R$ 100,00              15%
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float precoAtual, descontoValor, precoNovo;
    int descontoPorcento;

    printf("Preco atual: R$");
    scanf("%f", &precoAtual);

    if(precoAtual <= 30){
        descontoPorcento = 0;
        descontoValor = 0;
    }
    else if(precoAtual > 30 && precoAtual <= 100){
        descontoPorcento = 10;
        descontoValor = precoAtual * 0.1;
    }
    else{
        descontoPorcento = 15;
        descontoValor = precoAtual * 0.15;
    }

    precoNovo = precoAtual - descontoValor;

    printf("\nPreco atual: R$%.2f"
           "\nDesconto de %i%%: R$%.2f"
           "\nPreco novo: R$%.2f", precoAtual, descontoPorcento, descontoValor, precoNovo);

    return(0);
}