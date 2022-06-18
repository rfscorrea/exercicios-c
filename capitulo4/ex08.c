/*
8) Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.

SALÁRIO              PErCENTuAL dE AuMENTo
Até R$ 300,00               35%
Acima de R$ 300,00          15% */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, salarioAumento, aumentoValor;
    int aumentoPorcentagem;

    printf("Salario: ");
    scanf("%f", &salario);

    if(salario <= 300){
        aumentoPorcentagem = 35;
        aumentoValor = salario * 0.35;
        salarioAumento = salario + aumentoValor;
    }
    else{
        aumentoPorcentagem = 15;
        aumentoValor = salario * 0.15;
        salarioAumento = salario + aumentoValor;
    }

    printf("\nSalario atual:  R$%.2f"
           "\nAumento de %i%%: R$%.2f"
           "\nSalario final:  R$%.2f", salario, aumentoPorcentagem, aumentoValor, salarioAumento);

    return(0);
}