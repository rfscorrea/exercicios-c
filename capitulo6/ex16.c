/*
16) Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
    || a quantidade de produtos com preço inferior a R$ 50,00;
    || o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
    || a média dos preços dos produtos com preço superior a R$ 100,00. 
 */

#include <stdio.h>

int main(){
    char nomes[5][100];
    float precos[5];
    int qnt_precoinferior = 0, qnt_precomedia = 0, qnt_precosuperior = 0;
    int i;

    for(i=0; i<5; i++){
        printf("\nNome do produto %i: ", i+1);
        gets(nomes[i]);
        printf("Preco: R$");
        scanf("%f%*c", &precos[i]);

        if(precos[i] < 50){
            qnt_precoinferior++;
        }
        else if(precos[i] >= 50 && precos[i] <= 100){
            qnt_precomedia++;
        }
        else if(precos[i] > 100){
            qnt_precosuperior++;
        }
    }

    printf(
        "\nMenor que 50: %i"
        "\nEntre 50 e 100: %i"
        "\nMaior que 100: %i", qnt_precoinferior, qnt_precomedia, qnt_precosuperior
    );

    return 0;
}