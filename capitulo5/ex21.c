/* 21) Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
    1, 2, 3, 4      Votos para os respectivos candidatos
        5           Voto nulo
        6           Voto em branco
 
Faça um programa que calcule e mostre:
    || o total de votos para cada candidato;
    || o total de votos nulos;
    || o total de votos em branco;
    || a porcentagem de votos nulos sobre o total de votos; e
    || a porcentagem de votos em branco sobre o total de votos.
 
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem. */

#include <stdio.h>

int main(){
    int voto = 0;
    int votos_total = 0, votos_cdt1 = 0, votos_cdt2 = 0, votos_cdt3 = 0, votos_cdt4 = 0, votos_branco = 0, votos_nulo = 0;
    float porcentagem_nulo = 0, porcentagem_branco = 0;
    int i;

    while(i){
        printf("[1][2][3][4][5][6] \nVoto: ");
        scanf("%i%*c", &voto);

        if(voto == 0){
            break;
        }

        switch (voto)
        {
        case 1:
            votos_cdt1++;
            votos_total++;
            break;
        case 2:
            votos_cdt2++;
            votos_total++;
            break;
        case 3:
            votos_cdt3++;
            votos_total++;
            break;
        case 4:
            votos_cdt4++;
            votos_total++;
            break;
        case 5:
            votos_nulo++;
            votos_total++;
            break;
        case 6:
            votos_branco++;
            votos_total++;
            break;
        
        default:
            printf("=== VALOR INVALIDO! ===");
            break;
        }
    }

    
    porcentagem_branco = votos_branco * 100 / votos_total;
    porcentagem_nulo = votos_nulo * 100 / votos_total;

    printf(
        "\nCandidato 1: %i votos"
        "\nCandidato 2: %i votos"
        "\nCandidato 3: %i votos"
        "\nCandidato 4: %i votos"
        "\nBrancos: %.2f%% dos votos"
        "\nNulos: %.2f%% dos votos"
        "\nTotal: %i votos", 
        votos_cdt1, votos_cdt2, votos_cdt3, votos_cdt4, porcentagem_branco, porcentagem_nulo, votos_total
    );

    return(0);
}