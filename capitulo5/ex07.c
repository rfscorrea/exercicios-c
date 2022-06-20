/*
7) Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
    || a quantidade de pessoas com idade superior a 50 anos;
    || a média das alturas das pessoas com idade entre 10 e 20 anos;
    || a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
 */

#include <stdio.h>

int main(){
    #define quantidadeDePessoas 3

    float pessoas[quantidadeDePessoas][3], alturaEntre10e20 = 0, mediaAltura = 0, porcentagem40 = 0, peso40 = 0;
    int idadeSuperior50 = 0, idadeEntre10e20 = 0;
    int i, j;

    for(i=0; i<quantidadeDePessoas; i++){
        printf("Idade: ");
        scanf("%f", &pessoas[i][0]);
        if(pessoas[i][0] > 50){
            idadeSuperior50 += 1;
        }
        printf("Altura: ");
        scanf("%f", &pessoas[i][1]);
        if(pessoas[i][0] >= 10 && pessoas[i][0] <= 20){
            idadeEntre10e20 += 1;
            alturaEntre10e20 += pessoas[i][1];
        }
        printf("Peso: ");
        scanf("%f", &pessoas[i][2]);
        if(pessoas[i][2]){
            peso40 += 1;
        }
    }

    mediaAltura = alturaEntre10e20 / idadeEntre10e20;
    porcentagem40 = 100 * peso40 / quantidadeDePessoas;

    printf(
        "\n%i pessoas com idade superior a 50"
        "\nA media de altura das pessoas com idade entre 10 e 20 e %.2fm"
        "\n%.2f%% das pessoas analisadas possuem menos de 40kg", 
        idadeSuperior50, mediaAltura, porcentagem40
    );

    return(0);
}