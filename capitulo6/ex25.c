/*
25) Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, divida
todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos. 
 */

#include <stdio.h>

int main(){
    float num[15], maior = 0;
    int i;

    for(i=0; i<15; i++){
        printf("Valor %i: ", i+1);
        scanf("%f%*c", &num[i]);

        if(num[i] > maior){
            maior = num[i];
        }
    }

    printf("\nVetor: ");
    for(i=0; i<15; i++){
        printf("%.2f ", num[i]);
    }

    for(i=0; i<15; i++){
        num[i] = num[i] / maior;
    }

    printf("\nVetor: ");
    for(i=0; i<15; i++){
        printf("%.2f ", num[i]);
    }
}
