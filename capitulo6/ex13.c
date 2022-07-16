/*
13) Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1º aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2º aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
Média da classe = ??
 */

#include <stdio.h>

int main(){
    char nomes[8][100];
    float notas[8], notas_total = 0, media;
    int i;

    for(i=0; i<8; i++){
        printf("\nDigite o nome do %io aluno: ", i+1);
        gets(nomes[i]);
        printf("Digite a nota do %s: ", nomes[i]);
        scanf("%f%*c", &notas[i]);
        notas_total += notas[i];
    }

    media = notas_total / 8;

    printf("~~ Relatorio de notas ~~\n");
    for(i=0; i<8; i++){
        printf("%s %.2f\n", nomes[i], notas[i]);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nMedia da classe: %.2f\n", media);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    return 0;
}