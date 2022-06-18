/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
14) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a)a idade dessa pessoa em anos;
 b)a idade dessa pessoa em meses;
c)a idade dessa pessoa em d
ias;
d)a idade dessa pessoa em semanas. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoAtual, anoNascimento;
    float idadeAno, idadeMeses, idadeDias, idadeSemanas;

    anoAtual = 2022;

    printf("Ano de nascimento: ");
    scanf("%i", &anoNascimento);

    idadeAno = anoAtual - anoNascimento;
    idadeDias = idadeAno * 365;     // Desconsiderando anos bisextos
    idadeMeses = idadeAno * 12;
    idadeSemanas = idadeAno * 48;

    printf("Idade em anos: %.2f"
           "\nIdade em meses: %.2f"
           "\nIdade em semanas: %.2f"
           "\nIdade em dias: %.2f", idadeAno, idadeMeses, idadeSemanas, idadeDias);

    return(0);
}