/*
 7) Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario;

    printf("Salario: ");
    scanf("%f", &salario);

    if(salario < 500){
        salario *= 1.35;
        printf("Com o aumento de 35%%, seu salario passa a ser de: R$%.2f", salario);
    }
    else{
        printf("Voce nao recebera o beneficio");
    }

    return(0);
}