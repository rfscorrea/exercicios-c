/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
22) Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. Sabe-se que ND=N * (N−3)/2, em que N é o número de lados dopolígono */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int lados, diagonais;

    printf("Lados: ");
    scanf("%i", &lados);

    diagonais = lados * (lados - 3) / 2;

    printf("Diagonais: %i", diagonais);    

    return(0);
}
