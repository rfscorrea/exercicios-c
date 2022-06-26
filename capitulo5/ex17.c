/* 17) Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa não entrava na pesquisa. Faça um programa que:
 
    || leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
    || calcule e mostre a porcentagem de audiência de cada canal.

Para encerrar a entrada de dados, digite o número do canal ZERO. */

#include <stdio.h>

int main(){
    int numeroDoCanal, pessoasAssistindoCanal;
    float totalPessoas, pessoas_canal4 = 0, pessoas_canal5 = 0, pessoas_canal7 = 0, pessoas_canal12 = 0; 
    float porcetagem_canal4, porcetagem_canal5, porcetagem_canal7, porcetagem_canal12;

    while(numeroDoCanal != 0){
        printf("\nNumero do canal: ");
        scanf("%i", &numeroDoCanal);

        if(numeroDoCanal == 0){
            break;
        }

        printf("Numero pessoas assistindo o canal: ");
        scanf("%i", &pessoasAssistindoCanal);

        switch (numeroDoCanal){
        case 4:
            pessoas_canal4 += pessoasAssistindoCanal;
            totalPessoas += pessoasAssistindoCanal;
            break;
        case 5:
            pessoas_canal5 += pessoasAssistindoCanal;
            totalPessoas += pessoasAssistindoCanal;
            break;
        case 7:
            pessoas_canal7 += pessoasAssistindoCanal;
            totalPessoas += pessoasAssistindoCanal;
            break;
        case 12:
            pessoas_canal12 += pessoasAssistindoCanal;
            totalPessoas += pessoasAssistindoCanal;
            break;    
        }
    }

    porcetagem_canal4 = pessoas_canal4 * 100 / totalPessoas;
    porcetagem_canal5 = pessoas_canal5 * 100 / totalPessoas;
    porcetagem_canal7 = pessoas_canal7 * 100 / totalPessoas;
    porcetagem_canal12 = pessoas_canal12 * 100 / totalPessoas;

    printf(
        "\n\nTotal de pessoas = %.f"
        "\nPorcentagem assistindo canal 4 = %.2f%%"
        "\nPorcentagem assistindo canal 5 = %.2f%%"
        "\nPorcentagem assistindo canal 7 = %.2f%%"
        "\nPorcentagem assistindo canal 12 = %.2f%%", 
        totalPessoas, porcetagem_canal4, porcetagem_canal5,porcetagem_canal7, porcetagem_canal12
    );

    return(0);
}