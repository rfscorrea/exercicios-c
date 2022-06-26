/*
15) Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. 
Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não).Sabe-se que foram entrevistadas dez pessoas.
Faça um programa que calcule e mostre: 
    ||o número de pessoas que responderam sim;
    || o número de pessoas que responderam não;
    || o número de mulheres que responderam sim; e
    || a percentagem de homens que responderam não, entre todos os homens analisados. 
 */

#include<stdio.h>
#define totalPessoasEntrevistadas 10

int main(){
    char sexo, resposta;
    int totalHomens = 0, totalPessoas_sim = 0, totalPessoas_nao = 0, totalHomens_nao = 0, totalMulheres_sim = 0;
    float percentualHomens_nao = 0;
    int i;

    for(i = 0;  i < totalPessoasEntrevistadas; i++){
        printf("Sexo pessoa %i [m]/[f]: ", i);
        scanf("%c%*c", &sexo);
        printf("Resposta pessoa %i [s]/[n]: ", i);
        scanf("%c%*c", &resposta);

        if(sexo == 'm'){
            totalHomens++;
        }

        if(resposta == 's'){
            if(sexo == 'f') {totalMulheres_sim++;}
            totalPessoas_sim++;
        }
        else if(resposta == 'n'){
            if(sexo == 'm') {totalHomens_nao++;}
            totalPessoas_nao++;
        }
    }

    percentualHomens_nao = totalHomens_nao * 100 / totalHomens;

    printf(
        "\nTotal de votos sim = %i"
        "\nTotal de votos nao = %i"
        "\nTotal de mulheres que votaram sim = %i"
        "\nPercentual dos homens que votaram nao = %.2f%%", 
        totalPessoas_sim, totalPessoas_nao, totalMulheres_sim, percentualHomens_nao
    );

    return(0);
}
