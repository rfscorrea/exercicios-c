/* 16) Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando
idade igual a zero. */

#include <stdio.h>

int main(){
    float idade, somaIdade = 0;
    float mediaIdade = 0;
    int totalPessoas = 0;

    while(idade != 0){
        printf("Idade pessoa %i: ", totalPessoas);
        scanf("%f", &idade);

        totalPessoas++;
        somaIdade += idade;
    }


    mediaIdade = (somaIdade) / (totalPessoas - 1);

    printf("Media das idades: %.2f anos", mediaIdade);


    return(0);
}