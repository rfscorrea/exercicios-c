/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
24) Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários países e
precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.Sabe--se que a cotação do dólar é de R$ 1,80;
do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. Oprograma deve fazer as conversões e mostrá-las
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float dinheiroReal, dinheiroDolar, dinheiroMarcoAlemao, dinheiroLibra;

    printf("Dinheiro: R$");
    scanf("%f", &dinheiroReal);

    dinheiroDolar = dinheiroReal * 1.8;
    dinheiroMarcoAlemao = dinheiroReal * 2.0;
    dinheiroLibra = dinheiroReal * 3.57;

    printf("\nReal: %.2f"
    "\nDolar: %.2f"
    "\nMarco Alemao: %.2f"
    "\nLibra Esterlina: %.2f", dinheiroReal, dinheiroDolar, dinheiroMarcoAlemao, dinheiroLibra);

    return(0);
}