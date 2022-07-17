/*
22) Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.)
 */

#include <stdio.h>

int main(){
    int num[10], v2[10];
    int i, i2 = 0;

    for(i=0; i<10; i++){
        printf("Valor %i: ", i+1);
        scanf("%i%*c", &num[i]);

        if(num[i] > 0){
            v2[i2] = num[i];
            i2++;
        }
    }

    printf("\nVetor: ");
        for(i=0; i<10; i++){
            printf("%i ", num[i]);
        }


    printf("\nRetirando nulos e negativos: ");
    for(i=0; i<i2; i++){
        printf("%i ", v2[i]);
    }

    return 0;
}