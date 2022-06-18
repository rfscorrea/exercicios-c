/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
25) Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule emostre:
a)a hora digitada convertida em minutos;
b)o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c)o total dos minutos convertidos em segundos
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int horas, minutos;
    float horasConvertida, segundosConvertidos, minutosTotal;

    printf("Hora: ");
    scanf("%i", &horas);
    printf("Minutos: ");
    scanf("%i", &minutos);

    horasConvertida = horas * 60;
    minutosTotal = horasConvertida + minutos;
    segundosConvertidos = minutosTotal * 60;

    printf("\n%i horas sao %.2f minutos"
    "\n%i:%ih equivale a %.2f minutos no total"
    "\n%.2f minutos equivalem a %.2f segundos", horas, horasConvertida, horas, minutos, minutosTotal, minutosTotal, segundosConvertidos);

    return(0);
}