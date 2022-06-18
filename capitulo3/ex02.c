/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
2) Faça um programa que receba três números, calcule e mostre a multiplicação desses números.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, numero3, multiplicacao;

    printf("Numero 1: ");
    scanf("%i", &numero1);
    printf("Numero 2: ");
    scanf("%i", &numero2);
    printf("Numero 3: ");
    scanf("%i", &numero3);

    multiplicacao = numero1 * numero2 * numero3;

    printf("Multiplicacao %i x %i x %i = %i", numero1, numero2, numero3, multiplicacao);
    return(0);
}