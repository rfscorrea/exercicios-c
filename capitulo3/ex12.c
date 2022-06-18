/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
12)v Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioMinimo, salarioFuncionario, salariosMinimosFuncionario;

    salarioMinimo = 1212;       //Valor do salário mínimo no dia 17/06/2022

    printf("Salario: R$");
    scanf("%f", &salarioFuncionario);

    salariosMinimosFuncionario = salarioFuncionario / salarioMinimo;

    printf("O funcionario ganha %.2f salarios minimos", salariosMinimosFuncionario);

    return(0);
}