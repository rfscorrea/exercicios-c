/* . 1) Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    #define mediaMinima 7

    float nota1, nota2, nota3, nota4, mediaAluno;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Nota 4: ");
    scanf("%f", &nota4);

    mediaAluno = (nota1 + nota2 + nota3 + nota4) / 4;
    
    if(mediaAluno >= mediaMinima){
        printf("Media %.2f \nAPROVADO!!!!", mediaAluno);
    }
    else{
        printf("Media %.2f \nREPROVADO!!!", mediaAluno);
    }

    return(0);
}