/*
1) Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
    || todos os números pares;
    || a quantidade de números pares;
    || todos os números ímpares;
    || a quantidade de números ímpares. 
 */

#include <stdio.h>
#include <stdlib.h>


void imprimirvetor(char titulo[100], int tamanho, int v[tamanho]){
    int i;
    
    printf("\n%s", titulo);
    
    for(i = 0; i < tamanho-1; i++){
        printf("%i, ", v[i]);
    }
    printf("%i\n", v[tamanho-1]);
}


int main(){
    int i;
    int n;
    int numeros[6], par[6], impar[6];
    int qntImpar = 0, qntPar = 0;

    for(i = 0; i < 6; i++){
        printf("Numero %i: ", i+1);
        scanf("%i%c", &n);

        numeros[i] = n;

        if(n % 2 == 0){
            par[qntPar] = n;
            qntPar++;
        }
        else{
            impar[qntImpar] = n;
            qntImpar++;
        }
    }

    imprimirvetor("Numeros: ", 6, numeros);
    imprimirvetor("Pares: ", qntPar, par);
    printf("Foram %i numeros pares\n", qntPar);
    imprimirvetor("Impares: ", qntImpar, impar);
    printf("Foram %i numeros impares\n\n", qntImpar);

    return 0;
}