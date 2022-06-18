/* 6) Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    #define meio 0.5
    #define terco 0.33333

    float numero1, numero2, potencia, raizQuadradaN1, raizQuadradaN2, raizCubicaN1, raizCubicaN2;
    int i;

    printf("Numero 1: ");
    scanf("%f", &numero1);
    printf("Numero 2: ");
    scanf("%f", &numero2);

    potencia = pow(numero1, numero2);
    raizQuadradaN1 = sqrt(numero1);
    raizCubicaN1 = cbrt(numero1);
    raizQuadradaN2 = sqrt(numero2);
    raizCubicaN2 = cbrt(numero2);


    while(i != 0){
        printf("\n\n[1] O primeiro numero elevado ao segundo numero."
            "\n[2] Raiz quadrada de cada um dos numeros."
            "\n[3] Raiz cubica de cada um dos numeros"
            "\nOpcao: ");
        scanf("%i", &i);

        switch (i){
        case 1:
            printf("%.2f ^ %.2f = %.2f", numero1, numero2, potencia);
            break;
        case 2:
            printf("raiz quadrada de %.2f = %.2f", numero1, raizQuadradaN1);
            printf("\nraiz quadrada de %.2f = %.2f", numero2, raizQuadradaN2);
            break;
        case 3:
            printf("raiz cubica de %.2f = %.2f", numero1, raizCubicaN1);
            printf("\nraiz cubica de %.2f = %.2f", numero2, raizCubicaN2);
            break;
        default:
            printf("OPCAO INVALIDA");
            i = 0;
            break;
        }
    }

    return(0);
}