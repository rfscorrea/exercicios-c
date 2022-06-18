/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
3) Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float numeroUm, numeroDois;
    float divisao;

    printf("Numero 1: ");
    scanf("%f", &numeroUm);
    printf("Numero 2: ");
    scanf("%f", &numeroDois);

    divisao = numeroUm / numeroDois;

    printf("Divisao %.2f / %.2f = %.2f", numeroUm, numeroDois, divisao);

    return(0);


}