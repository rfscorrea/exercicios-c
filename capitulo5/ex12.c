/*
12) Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados
 */

#include<stdio.h>

int main(){
    int totalPrimos;
    int numeros[10];
    int i, n;

    for(i=0; i<10; i++){
        printf("Digite o numero %i: ", i+1);
        scanf("%i%*c", &numeros[i]);
    }

    for(i=0; i<10; i++){
        n = numeros[i];

        if(n==2 || n==3 || n==5 || n ==7){
            totalPrimos++;
        }
        else if(n > 7 && n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0){
            totalPrimos++;
        }
    }

    printf("Total de primos %i", totalPrimos);

    return(0);
}
