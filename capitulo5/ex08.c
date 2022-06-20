/*
8) Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
 *
    || a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
    || a média das idades das pessoas com altura inferior a 1,50 m;
    || a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
    || a quantidade de pessoas ruivas e que não possuem olhos azuis. 
 */

#include <stdio.h>

int main(){
    #define totalPessoas 6

    int i;
    int pessoas_condicaoA = 0, pessoas_condicaoB = 0, pessoas_condicaoC = 0, pessoas_condicaoD = 0;
    float idade_pessoas_condicaoB, media = 0, porcentagem = 0;
    float pessoasIdadePesoAltura[totalPessoas][3];
    char pessoasCorOlhosCabelo[totalPessoas][2];

    for(i=0; i<totalPessoas; i++){
        printf("\nIdade pessoa %i: ", i+1);
        scanf("%f", &pessoasIdadePesoAltura[i][0]);
        printf("\nAltura pessoa %i: ", i+1);
        scanf("%f", &pessoasIdadePesoAltura[i][1]);
        printf("\nPeso pessoa %i: ", i+1);
        scanf("%f", &pessoasIdadePesoAltura[i][2]);
        
        printf("\nCor dos olhos da pessoa %i \n[a]AZUL [p]PRETO [v]VERDE [c]CASTANHO: ", i+1);
        scanf(" %c", &pessoasCorOlhosCabelo[i][0]);
        printf("\nCor dos cabelos da pessoa %i \n[p]PRETO [c]CASTANHO [l]LOIRO [r]RUIVO: ", i+1);
        scanf(" %c", &pessoasCorOlhosCabelo[i][1]);

        if(pessoasIdadePesoAltura[i][0] > 50 && pessoasIdadePesoAltura[i][2] < 60){
            pessoas_condicaoA += 1;
        }
        if(pessoasIdadePesoAltura[i][1] < 1.5){
            pessoas_condicaoB += 1;
            idade_pessoas_condicaoB += pessoasIdadePesoAltura[i][0];
        }
        if(pessoasCorOlhosCabelo[i][0] == 'a'){
            pessoas_condicaoC += 1;
        }
        if(pessoasCorOlhosCabelo[i][1] == 'r' && pessoasCorOlhosCabelo[i][0] != 'a'){
            pessoas_condicaoD += 1;
        }
    }

    if(pessoas_condicaoB != 0) {media = idade_pessoas_condicaoB / pessoas_condicaoB;}
    porcentagem = 100 * pessoas_condicaoB / totalPessoas;

    printf(
        "\nCondicao a: %i pessoas"
        "\nCondicao b: %.f anos em media"
        "\nCondicao c: %.2f%% das pessoas"
        "\nCondicao d: %i pessoas", 
        pessoas_condicaoA, media, porcentagem, pessoas_condicaoD
    );

    return(0);
}