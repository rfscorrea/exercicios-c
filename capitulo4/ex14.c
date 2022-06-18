
/*
14) Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
 * 
FAIXA SALARIAL             % DE AUMENTO
Até R$ 300,00               50%
R$ 300,00 R$ 500,00         40%
R$ 500,00 R$ 700,00         30%
R$ 700,00 R$ 800,00         20%
R$ 800,00 R$ 1.000,00       10%
Acima de R$ 1.000,00        5%
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, salarioNovo;
    int aumento;

    printf("Salario atual: ");
    scanf("%f", &salario);

    if(salario <= 300){
        aumento = 50;
        salarioNovo = 1.5 * salario;
    } 
    else if (salario > 300 && salario <= 500){
        aumento = 40;
        salarioNovo = 1.4 * salario;
    }
    else if (salario > 500 && salario <= 700){
        aumento = 30;
        salarioNovo = 1.3 * salario;
    }
    else if (salario > 700 && salario <= 800){
        aumento = 20;
        salarioNovo = 1.2 * salario;
    }
    else if (salario > 800 && salario <= 1000){
        aumento = 10;
        salarioNovo = 1.1 * salario;
    }
    else{
        aumento = 5;
        salarioNovo = 1.05 * salario;
    }

    printf("Salario antigo: R$%.2f"
           "\nSalario atual: R$%.2f com aumento de %i%%", salario, salarioNovo, aumento);

    return(0);
}