/*
23) Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.
 */

#include <stdio.h>

int main(){
    int num[15];
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