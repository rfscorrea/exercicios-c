/*
10) O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
 * 
CusTo dE FáBriCA                        % do distrbuidor        % dos impostos
Até R$ 12.000,00                               5                    isento
Entre R$ 12.000,00 e R$ 25.000,00              10                    15
Acima de R$ 25.000,00                          15                    20
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float custoFabrica, precoFinal;
    int distribuidor, imposto;

    printf("Custo fabrica: ");
    scanf("%f", &custoFabrica);

    if(custoFabrica < 12000){
        distribuidor = 5;
        imposto = 0;
        precoFinal = custoFabrica * 1.05;
    }
    else if(custoFabrica >= 12000 && custoFabrica <= 25000){
        distribuidor = 10;
        imposto = 15;
        precoFinal = custoFabrica * 1.25;
    }
    else{
        distribuidor = 15;
        imposto = 20;
        precoFinal = custoFabrica * 1.35;
    }

    printf("%i%% do distribuidor e %i%% de imposto"
           "\nPreco final: R$%.2f", distribuidor, imposto, precoFinal);


    return(0);
}