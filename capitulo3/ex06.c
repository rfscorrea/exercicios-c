/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
6) Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioFixo, salarioFinal, vendas, comissao;

    printf("Salario: R$");
    scanf("%f", &salarioFixo);
    printf("Vendas: R$");
    scanf("%f", &vendas);

    comissao = 0.04 * vendas;
    salarioFinal = salarioFixo + comissao;

    printf("Salario fixo:  R$%.2f" 
           "\nComissao:      R$%.2f"
           "\nSalario final: R$%.2f", salarioFixo, comissao, salarioFinal);

    return(0);
}