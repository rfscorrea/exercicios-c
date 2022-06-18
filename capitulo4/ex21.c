/*
21) Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.
CÓDIGO DE ORIGEM    ProCEdêNCiA
1                   Sul
2                   Norte
3                   Leste
4                   Oeste
5 ou 6              Nordeste
7 ou 8 ou 9         Sudeste
10 a 20             Centro-oeste
21 a 30             Nordeste
 */

#include <stdio.h>

int main(){
    int codigo;
    printf("Codigo: ");
    scanf("%i", &codigo);

    switch(codigo){
    case 1:
        printf("Sul");
        break;
    case 2:
        printf("Norte");
        break;
    case 3:
        printf("Leste");
        break;
    case 4:
        printf("Oeste");
        break;
    case 5:
        printf("Nordeste");
        break;
    case 6:
        printf("Nordeste");
        break;
    }

    if(codigo == 7 || codigo == 8 ||codigo == 9){
        printf("Sudeste");
    }
    else if(codigo >= 10 && codigo <= 20){
        printf("Centro-Oeste");
    }
    else if(codigo >= 21 && codigo <= 30){
        printf("Nordeste");
    }

    return(0);
}