/*
21) Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.
 */

#include <stdio.h>

int main(){
    int num[10];
    int i;

    for(i=0; i<10; i++){
        printf("Valor %i: ", i+1);
        scanf("%i%*c", &num[i]);
    }

    printf("\nVetor: ");
        for(i=0; i<10; i++){
            printf("%i ", num[i]);
        }


    printf("\nTrocando 0 por 1: ");
    for(i=0; i<10; i++){
        if(num[i] == 0){
            num[i] = 1;
        }
        printf("%i ", num[i]);
    }

    return 0;
}