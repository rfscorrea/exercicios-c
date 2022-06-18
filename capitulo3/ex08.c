/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
8) Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float pesoKg, pesoG;

    printf("Peso em Kg: ");
    scanf("%f", &pesoKg);

    pesoG = pesoKg * 1000;

    printf("Peso em Kg %.2f:" 
    "\nPeso em g: %.2f", pesoKg, pesoG);

    return(0);
}