/*
18) Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não. */

#include <stdio.h>

int main(){
    int idade;

    printf("Idade: ");
    scanf("%i", &idade);

    if(idade >= 18){
        printf("Maior de idade!!!");
    }
    else{
        printf("Menor de idade!!!");
    }


    return(0);
}