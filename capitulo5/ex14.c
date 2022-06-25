/* 14) Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
    || a média das idades das pessoas que responderam ótimo;
    || a quantidade de pessoas que responderam regular; e
    || a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. 
 */

#include <stdio.h>
#define totalEspectadores 15

int main(){
    int idade, opiniao, totalIdade = 0;
    int qntResposta_otimo = 0, qntResposta_bom = 0, qntResposta_regular = 0;
    float porcentagem, media;
    int i;

    for(i=0; i<totalEspectadores; i++){
        idade = 0;
        opiniao = 0;

        printf("\nIdade pessoa %i: ", i+1);
        scanf("%i%*c", &idade);
        printf("\n[3]otimo   [2]bom  [1]regular\nOpiniao pessoa %i: ", i+1);
        scanf("%i%*c", &opiniao);

        switch(opiniao){
            case 3:
                qntResposta_otimo++;
                totalIdade += idade;
                break;
            case 2:
                qntResposta_regular++;
                break;
            case 1:
                qntResposta_bom++; 
                break;
        }
    }

    media = totalIdade / qntResposta_otimo;
    porcentagem = qntResposta_bom * 100 / totalEspectadores;

    printf(
        "\nMedia das idades de pessoas que responderam otimo = %.2f anos"
        "\nQnt de pessoas que responderam regular = %i pessoas"
        "\nPercentual de pessoas que responderam bom = %.2f%%", 
    media, qntResposta_regular, porcentagem);

    return(0);
}