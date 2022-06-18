/*
Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado
o imposto de 7% sobre o salário.
 * 
SALÁRIO                         GRATIFICAÇÃO
Até R$ 350,00                   R$ 100,00
R$ 350,00 R$ 600,00             R$ 75,00
R$ 600,00 R$ 900,00             R$ 50,00
Acima de R$ 900,00              R$ 35,00
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioBruto, salarioFinal, gratificacao, imposto;

    printf("Salario bruto: ");
    scanf("%f", &salarioBruto);

    imposto = 0.07 * salarioBruto;

    if(salarioBruto < 350){
        gratificacao = 100;
    }
    else if (salarioBruto >= 350 && salarioBruto < 600){
        gratificacao = 75;
    }
    else if(salarioBruto >= 600 && salarioBruto < 900){
        gratificacao = 50;
    }
    else{
        gratificacao = 35;
    }

    salarioFinal = (salarioBruto - imposto) + gratificacao;

    printf("\nSalario bruto: R$%.2f"
           "\nImposto: R$%.2f e Gratificacao: R$%.2f"
           "\nSalario final: R$%.2f", salarioBruto, imposto, gratificacao, salarioFinal);

    return(0);
}