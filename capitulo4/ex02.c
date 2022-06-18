/* 1) Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir: 
 * MÉDIA aritmética        mensagem
 *0,0 3,0                 Reprovado
 **3,0 7,0                 Exame
 *7,0 10,0                Aprovado
 */

#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1, nota2, mediaAluno;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    mediaAluno = (nota1 + nota2) / 2;

    if(mediaAluno < 3){
        printf("\nMedia %.2f \nREPROVADO!!!", mediaAluno);
    }
    else if(mediaAluno >= 5){
        printf("\nMedia %.2f \nAPROVADO!!!", mediaAluno);
    }
    else{
        printf("\nMedia %.2f \nRECUPERACAO!!!", mediaAluno);
    }

    return(0);
}