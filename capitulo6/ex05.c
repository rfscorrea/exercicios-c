/*
5) Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.Coloque 
os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez alunos. Mostre o 
número das matrículas que aparecem nos dois vetores. 
 */

#include <stdio.h>


int mostrarmatriculas(char materia[], int tamanho, double v[]){
    int i;
    printf("\n~~~~ Matricula dos alunos que cursam %s ~~~~", materia);
    for(i = 0; i < tamanho; i++){
        printf("\n%i. %.lf", i+1, v[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


int main(){
    double logica[15], programacao[10];
    int i;

    printf("\n~~~~ Alunos cursando logica ~~~~\n");
    for(i = 0; i < 15; i++){
        printf("Numero da matricula %i: ", i+1);
        scanf("%lf%*c", &logica[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("\n\n~~~~ Alunos cursando linguagem de programacao ~~~~\n");
    for(i = 0; i < 10; i++){
        printf("Numero da matricula %i: ", i+1);
        scanf("%lf%*c", &programacao[i]);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");


    mostrarmatriculas("Logica", 15, logica);
    mostrarmatriculas("Programacao", 10, programacao);

    return 0;
}