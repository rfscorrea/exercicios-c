/*
4) Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram
 */


#include <stdio.h>

int main(){
    int vetor[15];
    int i, pos, qntTrinta = 0;

    for(i = 0; i < 15; i++){
        printf("Numero %i: ", i+1);
        scanf("%i%*c", &vetor[i]);
    }

    for(pos = 0; pos < 15; pos++){

          if(vetor[pos] == 30){
            printf("\nNumero 30 na posicao: %i", pos);
            qntTrinta++;
        }
    }
    if(qntTrinta == 0){
        printf("\n~~~~~~ NENHUM NUMERO 30 FOI DIGITADO ~~~~~~\n");
    }


    return 0;
}