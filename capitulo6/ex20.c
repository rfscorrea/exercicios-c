/*
20) Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os nú-
meros positivos.
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


    printf("\nPositivos: ");
    for(i=0; i<10; i++){
        if(num[i] >= 0){
            printf("%i ", num[i]);
        }
    }

    return 0;
}