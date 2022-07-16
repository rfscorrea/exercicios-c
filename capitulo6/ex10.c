/*
10) Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco nú-
meros inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela
soma de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo
vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
tem no segundo vetor.
 */

#include <stdio.h>

int main(){
    int v1[10],v2[5], valortotal_v2 = 0;
    int vr1[10], vr2[10];
    int i, i2, tam_vr1 = 0, tam_vr2 = 0, divisores = 0;

    printf("\n~~ Vetor 1 ~~\n");
    for(i=0;i<10;i++){
        printf("Valor %i: ", i+1);
        scanf("%i", &v1[i]);
    }

     printf("\n~~ Vetor 2 ~~\n");
    for(i=0;i<5;i++){
        printf("Valor %i: ", i+1);
        scanf("%i", &v2[i]);
        valortotal_v2 += v2[i];
    }

    // vetor resultante 
    for(i=0; i<10; i++){
        if(v1[i] % 2 == 0){
            vr1[tam_vr1] = v1[i] + valortotal_v2;
            tam_vr1++;
        }
        else{
            for(i2 = 0; i2 < 5; i2++){
                if(v1[i] % v2[i2] == 0){
                    divisores++;
                }
            }
            vr2[tam_vr2] = divisores;
            divisores = 0;
            tam_vr2++;
        }
    }

    printf("\nV1: ");
    for(i=0; i<10; i++){
        printf("%i ", v1[i]);
    }
    printf("\nV2: ");
    for(i=0; i<5; i++){
        printf("%i ", v2[i]);
    }
    printf("\nVR1: ");
    for(i=0; i<tam_vr1; i++){
        printf("%i ", vr1[i]);
    }
    printf("\nVR2: ");
    for(i=0; i<tam_vr2; i++){
        printf("%i ", vr2[i]);
    }

    return 0;
}