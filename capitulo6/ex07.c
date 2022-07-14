/*
7) Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor. 
 */

#include <stdio.h>

int main(){
    float somapositivos = 0;
    int totalnegativos = 0;
    float numeros[10];
    int i;

    for(i=0; i<10; i++){
        printf("Numero %i: ", i+1);
        scanf("%f%*c", &numeros[i]);

        if(numeros[i] < 0){
            totalnegativos++;
        }
        else if(numeros[i] > 0){
            somapositivos += numeros[i];
        }
    }

    printf("\nSoma dos positivos: %.2f", somapositivos);
    printf("\nTotal de negativos: %i", totalnegativos);



    return 0;
}