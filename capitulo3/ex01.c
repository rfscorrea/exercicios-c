/* Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
1) Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, subtracao;

    printf("Numero 1: ");
    scanf("%i", &numero1);
    printf("Numero 2:");
    scanf("%i", &numero2);

    subtracao = numero1 - numero2;

    printf("Subtracao %i - %i = %i", numero1, numero2, subtracao);

    return(0);
}

