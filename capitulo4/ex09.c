/*
 Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito. 
 
 * SALDO                 MÉDIO PERCENTUAL
Acima de R$ 400,00      30% do saldo médio
R$ 400,00 R$ 300,00     25% do saldo médio
R$ 300,00 R$ 200,00     20% do saldo médio
Até R$ 200,00           10% do saldo médio
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float saldo, credito;
    int porcentagem;

    printf("Saldo: ");
    scanf("%f", &saldo);

    if(saldo > 400){
        porcentagem = 30;
        credito = 0.3 * saldo;
    }
    else if (saldo <= 400 && saldo >= 300){
        porcentagem = 25;
        credito = 0.25 * saldo;
    }
    else if(saldo < 300 && saldo >= 200){
        porcentagem = 20;
        credito = 0.2 * saldo;
    }
    else{
        porcentagem = 10;
        credito = 0.1 * saldo;
    }

    printf("Com o saldo R$%.2f voce recebera R$%.2f de credito (%i%%)", saldo, credito, porcentagem);

    return(0);
}