/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
4) Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira e peso 3 para a segunda. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, mediaPonderada;
    
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    mediaPonderada = ( (2 * nota1) + (3 * nota2) ) / 5;

    printf("Media ponderada: %.2f", mediaPonderada);
    
    return(0);
}