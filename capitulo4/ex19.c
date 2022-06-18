/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando
as seguintes fórmulas (onde h é a altura):
 * 
 *para homens: (72.7 * h) – 58.
 * para mulheres: (62.1 * h) – 44.7. 
 */

#include <stdio.h>

int main(){
    float altura, pesoIdeal;
    int sexo;

    printf("Altura: ");
    scanf("%f", &altura);
    getchar();
    printf("[1] Masculino \n[2] Feminino \nSexo: ");
    scanf("%i", &sexo);

    switch(sexo){
        case 1:
        pesoIdeal = (72.7 * altura) - 58;
        break;

        case 2:
        pesoIdeal = (62.1 * altura) - 44.7;
        break;

        default:
        printf("Invalido");
        break;
    }

    printf("Peso ideal: %.2fKg", pesoIdeal);

    return(0);
}