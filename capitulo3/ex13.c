/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, resultado, i;

    printf("Numero: ");
    scanf("%i", &numero);

    for(i=1; i<=10; i++){
        resultado = numero * i;
        printf("%i x %i = %i\n", numero, i, resultado);
    }

    return(0);
}