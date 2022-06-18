/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
7) Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, pesoGordo, pesoMagro;

    printf("Peso: ");
    scanf("%f", &peso);

    pesoGordo = peso * 1.15;
    pesoMagro = peso * 0.8;

    printf("Peso atual: %.2f kg"
           "\nPeso se emagrecer 20%%: %.2f kg"
           "\nPeso se engordar 15%%: %.2f kg", peso, pesoMagro, pesoGordo);


    return(0);
}