/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
16) Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float cateto1, cateto2, hipotenusa, quadradoCateto1, quadradoCateto2;

    printf("Cateto 1: ");
    scanf("%f", &cateto1);
    printf("Cateto 2: ");
    scanf("%f", &cateto2);

    quadradoCateto1 = pow(cateto1, 2);
    quadradoCateto2 = pow(cateto2, 2);
    hipotenusa = sqrt(quadradoCateto1 + quadradoCateto2);

    printf("Cateto 1: %.2f"
    "\nCateto 2: %.2f" 
    "\nHipotenusa: %.2f", cateto1, cateto2, hipotenusa);

    return(0);
}