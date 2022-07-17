/*
24) Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.
 */

#include <stdio.h>

int main(){
    int v[15], vr[15];
    int i, i2 = 0;

    for(i=0; i<15; i++){
        printf("Valor %i: ", i+1);
        scanf("%i%*c", &v[i]);

        if(v[i] == 2 || v[i] == 3 || v[i] == 5 || v[i] == 7){
            vr[i2] = v[i];
            i2++;
        }
        else if(v[i] % 2 != 0 && v[i] % 3  != 0 && v[i] % 5 != 0 && v[i] % 7 != 0){
            vr[i2] = v[i];
            i2++;
        }
    }

    printf("\nVetor: ");
    for(i=0; i<15; i++){
        printf("%i ", v[i]);
    }

    printf("\nVetor resultante: ");
    for(i=0; i<i2; i++){
        printf("%i ", vr[i]);
    }

    return 0;
}