/*
 22) Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero. */

#include <stdio.h>

int main(){
    int idade, totalAltura = 0, totalPessoas = 0;
    float altura, media = 0;
    int i = 1;

    while(i){
        printf("Idade pessoa %i: ", i);
        scanf("%i%*c", &idade);

         if(idade <= 0){
            break;
        }

        printf("Altura pessoa %i: ", i);
        scanf("%f%*c", &altura);

       
        if(idade > 50){
            totalAltura += altura;
            totalPessoas++;
        }

        i++;
    }

    media = totalAltura / totalPessoas;

    printf(
        "\n%i pessoas com idade maior que 50"
        "\nMedia de altura entre elas: %.2fm", 
        totalPessoas, media
    );

    return(0);
}