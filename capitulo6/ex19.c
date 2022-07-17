/*
19) Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. 
 */

#include <stdio.h>

int main(){
    int v1[10], v2[10], v3[10];
    int i;

    for(i=0; i<10; i++){
        printf("Vetor 1 Valor %i: ", i+1);
        scanf("%i%*c", &v1[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("Vetor 2 Valor %i: ", i+1);
        scanf("%i%*c", &v2[i]);
    }

    for(i=0; i<10; i++){
        v3[i] = v1[i] * v2[i];
    }


    printf("\nVetor 1: ");
    for(i=0; i<10; i++){
        printf("%i ", v1[i]);
    }
    printf("\nVetor 2: ");
    for(i=0; i<10; i++){
        printf("%i ", v2[i]);
    }
    printf("\nVetor 3: ");
    for(i=0; i<10; i++){
        printf("%i ", v3[i]);
    }

    return 0;
}