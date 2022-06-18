/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
11) Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A= (diagonal maior * diagonal
menor)/2. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int diagonal1, diagonal2;
    float area;

    printf("Diagonal 1: ");
    scanf("%i", &diagonal1);
    printf("Diagonal 2: ");
    scanf("%i", &diagonal2);

    area = (diagonal1 * diagonal2) / 2;

    printf("Area: %.2f", area);

    return(0);
}