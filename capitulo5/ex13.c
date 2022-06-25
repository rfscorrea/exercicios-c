/* 13) Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: 
de 1 a 10 anos;
de 11 a 20 anos;
de 21 a 30 anos;
de 31 anos para cima. */

#include <stdio.h>

int main(){
    int idade;
    float peso;
    int totalPessoasA = 0, totalPessoasB = 0, totalPessoasC = 0, totalPessoasD = 0;
    float totalPesoA = 0, totalPesoB = 0, totalPesoC = 0, totalPesoD = 0;
    float mediaA = 0, mediaB = 0, mediaC = 0, mediaD = 0;
    int i;

    for(i=0;i<15;i++){
        printf("%i %i %i %i", totalPessoasA, totalPessoasB, totalPessoasC, totalPessoasD);
        printf("\n%.2f %.2f %.2f %.2f\n", totalPesoA, totalPesoB, totalPesoC, totalPesoD);
        idade = 0;
        peso = 0;

        printf("Idade pessoa %i: ", i);
        scanf("%i", &idade);
        printf("Peso da pessoas %i: ", i);
        scanf("%f", &peso);

        if(idade <= 10){
            totalPesoA += peso;
            totalPessoasA++;
        }
        else if(idade >= 11 && idade <= 20){
            totalPesoB += peso;
            totalPessoasB++;
        }
        else if(idade >= 21 && idade <= 30){
            totalPesoC += peso;
            totalPessoasC++;
        }
        else if(idade > 31){
            totalPesoD += peso;
            totalPessoasD++;
        }
    }

    if(totalPessoasA > 0) {mediaA = totalPesoA / totalPessoasA;}
    if(totalPessoasA > 0) {mediaB = totalPesoB / totalPessoasB;}
    if(totalPessoasA > 0) {mediaC = totalPesoC / totalPessoasC;}
    if(totalPessoasA > 0) {mediaD = totalPesoD / totalPessoasD;}

    printf(
        "\nMedia de peso na faixa etaria A = %.2f"
        "\nMedia de peso na faixa etaria B = %.2f"
        "\nMedia de peso na faixa etaria C = %.2f"
        "\nMedia de peso na faixa etaria D = %.2f", 
        mediaA, mediaB, mediaC, mediaD
    );

    return(0);
}
