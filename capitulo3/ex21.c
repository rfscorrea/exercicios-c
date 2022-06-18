/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

21) Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
a)a hora trabalhada vale 1/8 do salário mínimo;
b)a hora extra vale 1/4 do salário mínimo
c)o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d)a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e)o salário a receber equivale ao salário bruto mais a quantia a receber pela hora extra */

#include <stdio.h>
#include <stdlib.h>

int main(){
    #define salarioMinimo 1212

    float horasTrabalhadas, horasTrabalhadasExtra, salario, valor_horasTrabalhadas, valor_horasTrabalhadasExtra;

    printf("Horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Horas extra: ");
    scanf("%f", &horasTrabalhadasExtra);

    valor_horasTrabalhadas = horasTrabalhadas * (salarioMinimo / 8);
    valor_horasTrabalhadasExtra = horasTrabalhadasExtra * (salarioMinimo / 4);
    salario = valor_horasTrabalhadas + valor_horasTrabalhadasExtra;

    printf("Salaio a receber: R$%.2f", salario);

    return(0);
}