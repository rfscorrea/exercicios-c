/*
12) Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
 */

#include <stdio.h>

int main(){
    int n[5];
    int i, soma = 0;

    for(i=0; i<5; i++){
        printf("Digite o %io numero: ", i+1);
        scanf("%i", &n[i]);
        soma += n[i];
    }

    printf("Os numeros digitados foram: ");
    for(i=0; i<4; i++){
        printf("%i + ", n[i]);
    }
    printf("%i = %i", n[4], soma);


    return 0;
}