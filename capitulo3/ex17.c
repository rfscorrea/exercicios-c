/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
17) Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que C= 2*pi*R
b) a área de uma esfera; sabe-se que A=pi*R^2
c) o volume de uma esfera; sabe-se que V= 3/4 *pi*R^3  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    #define pi 3.14159265359

    float raio, comprimento, area, volume, raioQuadrado, raioCubo;

    printf("Raio: ");
    scanf("%f", &raio);

    raioQuadrado = pow(raio, 2);
    raioCubo = pow(raio, 3);

    comprimento = 2 * pi * raio;
    area = pi * raioQuadrado;
    volume = (4/3) * (pi * raioCubo);

    printf("Comprimento: %.2f" 
           "\nArea: %.2f"
           "\nVolume: %.2f", comprimento, area, volume);

    return(0);
}