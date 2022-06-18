/* 3) Faça um programa que receba dois números e mostre o menor. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2, menor;
    
    printf("Numero 1: ");
    scanf("%f", &numero1);

    menor = numero1;

    printf("Numero 2: ");
    scanf("%f", &numero2);

    if(numero2 < menor){
        menor = numero2; 
    }

    printf("\nNumeros digitados: %.2f e %.2f"
           "\nO menor entre eles e: %.2f", numero1, numero2, menor);

    return(0);
}