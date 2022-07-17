/*
18) Faça um programa que preencha um vetor com quinze números, determine e mostre:
    || o maior número e a posição por ele ocupada no vetor;
    || o menor número e a posição por ele ocupada no vetor. 
 */

#include <stdio.h>

int main(){
    int numeros[15];
    int maior, posmaior = 0, menor = 0, posmenor;
    int i;

    for(i=0; i<15; i++){
        printf("Numero %i: ", i+1);
        scanf("%i%*c", &numeros[i]);

        if(i==0){
            maior = numeros[i];
            menor = numeros[i];
        }

        if(numeros[i] > maior){
            maior = numeros[i];
            posmaior = i;
        }
        else if(numeros[i] < menor){
            menor = numeros[i];
            posmenor = i; 
        }
    }

    printf(
        "\nMaior: %i"
        "\nPos maior: %i"
        "\nMenor: %i"
        "\nPos menor: %i", maior, posmaior, menor, posmenor
    );

    return 0;
}