/*
 20) Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.
 * 
CATEgoriA       idAdE
Infantil        5 a 7
Juvenil         8 a 10
Adolescente     11 a 15
Adulto          16 a 30
Sênior          Acima de 30
 */

#include <stdio.h>

int main(){
    int idade;

    printf("Idade: ");
    scanf("%i", &idade);

    if(idade < 5){
        printf("*");
    }
    else if(idade >= 5 && idade <= 7){
        printf("INFANTIL");
    }
    else if(idade >= 8 && idade <= 10){
        printf("JUVENIL");
    }

    else if(idade >= 11 && idade <= 15){
        printf("ADOLESCENTE");
    }

    else if(idade >= 16 && idade <= 30){
        printf("ADULTO");
    }
    else{
        printf("SENIOR");
    }

    return(0);
}