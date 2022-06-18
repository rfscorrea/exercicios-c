/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
20) Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a dis-
tância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar
sua ponta  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    #define pi 3.14159265359

    float angulo, distancia, medidaEscada;

    printf("Angulo: ");
    scanf("%f", &angulo);
    printf("Distancia: ");
    scanf("%f", &distancia);

    angulo = (angulo * pi) / 180;
    medidaEscada = distancia / cos(angulo);

    printf("Medida da escada: %.2f", medidaEscada);

    return(0);
}