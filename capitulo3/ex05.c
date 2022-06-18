/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos
5) Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float precoAntigo, precoNovo;
    printf("Preco antigo: ");
    scanf("%f", &precoAntigo);

    precoNovo = 0.9 * precoAntigo;

    printf("\nPreco antigo: R$%.2f"
    "\nPreco novo:   R$%.2f", precoAntigo, precoNovo);

    return(0);
}