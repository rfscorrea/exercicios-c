/*
11) Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
SALÁRIO                  PERCENTUAL DE AUMENTO
Até R$ 300,00                     15%
R$ 300,00 R$ 600,00               10%
R$ 600,00 R$ 900,00               5%
Acima de R$ 900,00                0%
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioNovo, salarioAtual, aumento;
    int aumentoPorcentagem;

    printf("Salario atual: ");
    scanf("%f", &salarioAtual);

    if(salarioAtual < 300){
        aumentoPorcentagem = 15;
        aumento = 0.15 * salarioAtual;
    }
    else if(salarioAtual >= 300 && salarioAtual < 600){
        aumentoPorcentagem = 10;
        aumento = 0.1 * salarioAtual;
    }
    else if (salarioAtual >= 600 && salarioAtual <= 900){
        aumentoPorcentagem = 5;
        aumento = 0.05 * salarioAtual;
    }
    else{
        aumentoPorcentagem = 0;
        aumento = 0;
    }

    salarioNovo = salarioAtual + aumento;

    printf("Salario de R$%.2f recebe R$%.2f de aumento (%i%%)"
           "\nSalario novo: R$%.2f", salarioAtual, aumento, aumentoPorcentagem, salarioNovo);

    return(0);
}