/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
9) Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int base1, base2, altura;
    float area;

    printf("Base 1: ");
    scanf("%i", &base1);
    printf("Base 2: ");
    scanf("%i", &base2);
    printf("Altura: ");
    scanf("%i", &altura);

    area = (base1 + base2) * altura / 2;

    printf("Area do trapezio: %.2f", area);

    return(0);
}