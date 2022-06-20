/*
2) Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse pre-
ço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro. 
 */

#include <stdio.h>

int main(){
    int x, ingressosVendidos, lucroMaximo_ingressos;
    float ingressosPreco, lucro, lucroMaximo_valor, lucroMaximo_ingressosPreco;

    for(x=0; x<=8; x++){
        ingressosVendidos = (120 + 26 * x);
        ingressosPreco = (5 - 0.5 * x);
        lucro = (ingressosPreco * ingressosVendidos) - 200;

        if (lucro > lucroMaximo_valor){
            lucroMaximo_ingressos = ingressosVendidos;
            lucroMaximo_valor = lucro;
            lucroMaximo_ingressosPreco = ingressosPreco;
        }

        printf("\nPara %i ingressos vendidos a R$%.2f cada, espera-se um lucro de R$%.2f", ingressosVendidos, ingressosPreco, lucro);
    }

    printf("\n\nO lucro maximo de R$%.2f e esperado para %i ingressos vendidos a R$%.2f cada", lucroMaximo_valor, lucroMaximo_ingressos, lucroMaximo_ingressosPreco);

    return(0);
}