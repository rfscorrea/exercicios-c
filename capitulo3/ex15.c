/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
 15) João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, conta1, conta2, contaTotal, salarioSobrou;

    printf("Salario: ");
    scanf("%f", &salario);
    printf("Conta 1: ");
    scanf("%f", &conta1);
    printf("Conta 2: ");
    scanf("%f", &conta2);

    conta1 *= 1.02;
    conta2 *= 1.02;
    contaTotal = conta1 + conta2;
    salarioSobrou = salario - contaTotal;

    printf("Com a multa, voce deve pagar: R$%.2f"
    "\nSeu saldo final sera: R$%.2f", contaTotal, salarioSobrou);

    return(0);
}
