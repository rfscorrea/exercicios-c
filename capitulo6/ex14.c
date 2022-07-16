/*
14) Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório
de notas:
 Irei considerar media acima de 7 para aprovação, entre 4 e 7 em exame e menor q 4 reprovado;
 
|| média da classe = ?
|| percentual de alunos aprovados = ?%
|| percentual de alunos de exame = ?%
|| percentual de alunos reprovados = ?%  
 */

#include <stdio.h>
#define totalalunos 6

int main(){
    char nomes[6][100];
    float notas[6][2], medias[6], notas_total, media_total;
    float pct_aprovados, pct_exames, pct_reprovados;
    int aprovados = 0, exames = 0, reprovados = 0;
    int i;

    for(i=0; i<6; i++){
        printf("\nNome aluno %i: ", i+1);
        gets(nomes[i]);
        printf("Nota 1: ");
        scanf("%f%*c", &notas[i][0]);
        printf("Nota 2: ");
        scanf("%f%*c", &notas[i][1]);

        medias[i] = (notas[i][0] + notas[i][1]) / 2;
        notas_total += notas[i][0] + notas[i][1];

        if(medias[i] >= 7){
            aprovados++;
        }
        else if(medias[i] < 7 && medias[i] >= 4){
            exames++;
        }
        else{
            reprovados++;
        }

    }

    media_total = notas_total / totalalunos * 2;
    pct_aprovados = (100 * aprovados) / totalalunos;
    pct_exames = (100 * exames) / totalalunos;
    pct_reprovados = (100 * reprovados) / totalalunos;

    printf(
        "\nMedia da classe: %.2f"
        "\n%.2f%% de alunos aprovados"
        "\n%.2f%% de alunos de exame"
        "\n%.2f%% de alunos reprovados", media_total, pct_aprovados, pct_exames, pct_reprovados
    );
    
    return 0;
}