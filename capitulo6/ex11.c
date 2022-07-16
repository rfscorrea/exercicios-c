/*
11) Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares. 
 */

#include <stdio.h>

int main(){
    int n, v[10], vpar[10], vimpar[10];
    int i, i2 = 0, i3 = 0;

    for(i=0; i<10; i++){
        printf("Valor %i: ", i+1);
        scanf("%i", &n);

        v[i] = n;

        if(n % 2 == 0){
            vpar[i2] = n;
            i2++;
        }
        else{
            vimpar[i3] = n;
            i3++;
        }
    }

    printf("\nVetor 1: ");
    for(i=0; i<10; i++){
        printf("%i ", v[i]);
    }
    printf("\nVetor par: ");
    for(i=0; i<i2; i++){
        printf("%i ", vpar[i]);
    }
    printf("\nVetor impar: ");
    for(i=0; i<i3; i++){
        printf("%i ", vimpar[i]);
    }
    


    return 0;
}