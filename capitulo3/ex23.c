/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
23) Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida doterceiro ângulo. Sabe-se que a soma dos ângulos de um
triângulo é 180 graus. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float angulo1, angulo2, angulo3;

    printf("Angulo 1:");
    scanf("%f", &angulo1);
    printf("Angulo 2:");
    scanf("%f", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);

    printf("Terceiro angulo: %.2f", angulo3);


    return(0);
}