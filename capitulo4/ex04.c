/* 4) Faça um programa que receba três números e mostre o maior. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2, numero3, maior;
    
    printf("Numero 1: ");
    scanf("%f", &numero1);
    maior = numero1;
    printf("Numero 2: ");
    scanf("%f", &numero2);
    printf("Numero 3: ");
    scanf("%f", &numero3);

    if(numero2 > maior){
        maior = numero2;
    }
    
    if(numero3 > maior){
        maior = numero3;
    }

    printf("\nNumeros digitados: %.2f, %.2f e %.2f"
           "\nO maior entre eles e o: %.2f", numero1, numero2, numero3, maior);

    return(0);
}