/*
17) Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo
os elementos dos dois vetores anteriores ordenados de maneira decrescente.
 */

#include <stdio.h>

int main(){
    int v1[10], v2[10], v3[20];
    int i, i2= 0, i3, aux;

    for(i=0; i<10; i++){
        printf("Vetor 1, valor %i: ", i+1);
        scanf("%i%*c", &v1[i]);
        v3[i2] = v1[i];
        i2++;
    }
    for(i=0; i<10; i++){
        printf("Vetor 2, valor %i: ", i+1);
        scanf("%i%*c", &v2[i]);
        v3[i2] = v2[i];
        i2++;
    }

    for(i=0; i<19; i++){
        i3 = i + 1;
        while(i3<20){
            if(v3[i] < v3[i3]){
                aux = v3[i];
                v3[i] = v3[i3];
                v3[i3] = aux;
            }

            i3++;
        }
    }

    for(i=0; i<20; i++){
        printf("%i ", v3[i]);
    }

    return 0;
}