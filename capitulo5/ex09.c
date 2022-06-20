/*
9) Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
    || a média das idades das dez pessoas;
    || a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
    || a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m. 
 */

#include <stdio.h>

int main(){
    #define totalPessoas 10

    float pessoas[totalPessoas][3];
    float media = 0, porcentagem = 0;
    int pessoas_condicaoB = 0, pessoas_condicaoC = 0, i, idadeTotal = 0;

    for(i=0; i<totalPessoas; i++){
        printf("\nIdade pessoa %i: ", i+1);
        scanf("%f", &pessoas[i][0]);
        printf("\nPeso pessoa %i: ", i+1);
        scanf("%f", &pessoas[i][1]);
        printf("\nAltura pessoa %i: ", i+1);
        scanf("%f", &pessoas[i][2]);

        if(pessoas[i][2] < 1.5){
            if(pessoas[i][1] > 90){
                pessoas_condicaoB += 1;
            }
        }

        else if(pessoas[i][2] > 1.9){
            if(pessoas[i][0] >= 10 && pessoas[i][0] <= 30){
                pessoas_condicaoC += 1;
            }
        }

        idadeTotal += pessoas[i][0];
    }

    porcentagem = 100 * pessoas_condicaoC / totalPessoas;
    media = idadeTotal / totalPessoas;

    printf(
        "\nMedia das idades: %.2f"
        "\nPessoas condicao b: %i"
        "\n%.2f%% das pessoas na condicao c", 
        media, pessoas_condicaoB, porcentagem
    );

    return(0);
}
