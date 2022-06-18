/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
10) Faça um programa que calcule e mostre a área de um quadrado S. abe-se que: A= lado * lado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int lado1, lado2;
    float area;

    printf("Lado 1: ");
    scanf("%i", &lado1);
    printf("Lado 2: ");
    scanf("%i", &lado2);

    area = lado1 * lado2;

    printf("Quadrado de lados %i e %i tem area %.2f", lado1, lado2, area);

    return(0);
}