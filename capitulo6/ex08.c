/*
8) Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
 
    || o nome do aluno com maior média (desconsiderar empates);
    || para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar
na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5. 
 */

#include <stdio.h>


int main(){
    char alunos[7][100];
    float media[7], maiorMedia;
    int indiceAluno_maiorMedia;
    float nota;
    int i;

    for(i=0; i<7; i++){
        printf("\nNome do aluno %i: ", i+1);
        fgets(alunos[i], 100, stdin);
        printf("Media do aluno %i: ", i+1);
        scanf("%f%*c", &media[i]);

        if(i==0){
            maiorMedia = media[i];
            indiceAluno_maiorMedia = i;
        }
        else if(media[i] > maiorMedia){
            maiorMedia = media[i];
            indiceAluno_maiorMedia = i;
        }
    }


    printf("\nAluno com maior media\nNome: %sMedia%.2f\n", alunos[indiceAluno_maiorMedia], maiorMedia);
    for(i=0; i<7; i++){
        if(media[i] < 7){
            nota = 10 - media[i];
            printf("\n%s precisa tirar %.2f no exame final", alunos[i], nota);
        }
    }


    return 0;
}