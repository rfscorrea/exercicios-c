/*
3) Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
 
FAIXA ETARIA            IDADE
    1a               Até 15 anos
    2a               De 16 a 30 anos
    3a               De 31 a 45 anos
    4a               De 46 a 60 anos
    5a               Acima de 60 anos
 */

#include <stdio.h>

int main(){
    #define totalPessoas 8

    int idades[totalPessoas], i;
    int quantidadePessoas_faixaEtaria1 = 0, quantidadePessoas_faixaEtaria2 = 0, 
    quantidadePessoas_faixaEtaria3 = 0, quantidadePessoas_faixaEtaria4 = 0, quantidadePessoas_faixaEtaria5 = 0;
    float porcentagemPessoas_primeiraFaixa = 0, porcentagemPessoas_ultimaFaixa = 0;

    for(i=0; i<totalPessoas; i++){
        scanf("%i", &idades[i]);
    }

    for(i=0; i<totalPessoas; i++){
        if(idades[i] <= 15){
            quantidadePessoas_faixaEtaria1 += 1;
        }
        else if(idades[i] <= 16 && idades[i] <= 30){
            quantidadePessoas_faixaEtaria2 += 1;
        }
        else if(idades[i] <= 31 && idades[i] <= 45){
            quantidadePessoas_faixaEtaria3 += 1;
        }
        else if(idades[i] <= 46 && idades[i] <= 60){
            quantidadePessoas_faixaEtaria4 += 1;
        }
        else{
            quantidadePessoas_faixaEtaria5 += 1;
        }
    }

    porcentagemPessoas_primeiraFaixa = (100 * quantidadePessoas_faixaEtaria1) / (totalPessoas);
    porcentagemPessoas_ultimaFaixa = (100 * quantidadePessoas_faixaEtaria5) / (totalPessoas);

    printf(
        "\n%i pessoas na faixa etaria 1"
        "\n%i pessoas na faixa etaria 2"
        "\n%i pessoas na faixa etaria 3"
        "\n%i pessoas na faixa etaria 4"
        "\n%i pessoas na faixa etaria 5"
        "\n\n%.2f%% das pessoas estao na primeira faixa"
        "\n%.2f%% das pessoas estao na ultima faixa", quantidadePessoas_faixaEtaria1, quantidadePessoas_faixaEtaria2, 
        quantidadePessoas_faixaEtaria3, quantidadePessoas_faixaEtaria4, quantidadePessoas_faixaEtaria5, porcentagemPessoas_primeiraFaixa, 
        porcentagemPessoas_ultimaFaixa
    );

    return (0);
}