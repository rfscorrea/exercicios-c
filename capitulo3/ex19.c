/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
19) Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostrea sua área (em m
2) e a potência de iluminação que deverá ser uti  */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float comprimento, largura, area, potencia;

    printf("Comprimento: ");
    scanf("%f", &comprimento);
    printf("Largura: ");
    scanf("%f", &largura);

    area = comprimento * largura;
    potencia = 18 * area;

    printf("Comodo com area: %.2fm2"
    "\nIluminacao com %2.f Watts de potencia", area, potencia);

    return(0);
}