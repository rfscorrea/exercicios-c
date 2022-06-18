/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F=180*(C+32)/100.  */

#include <stdio.h>
#include <stdlib.h>


int main(){
    float tempCelsius, tempFahrenheit;

    printf("Temperatura em Celsius: ");
    scanf("%f", &tempCelsius);

    tempFahrenheit = 1.8 * tempCelsius + 32;

    printf("Temperatura em Celsius: %.2f"
           "\nTemperatura em Fahrenheit: %.2f", tempCelsius, tempFahrenheit);
           
    return(0);
}