/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
 * 
    Nº     OPERAÇÃO
    1      Média entre os números digitados
    2   Diferença do maior pelo menor
    3   Produto entre os números digitados
    4   Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2, media, maior, menor, diferenca, produto, divisao;
    int i;

    printf("Numero 1: ");
    scanf("%f", &numero1);

    maior = numero1;

    printf("Numero 2: ");
    scanf("%f", &numero2);

    if(numero2 > maior){
        maior = numero2;
        menor = numero1;
    }
    else{
        menor = numero2;
    }

    media = (numero1 + numero2) / 2;
    diferenca = maior - menor;
    produto = numero1 * numero2;
    divisao = numero1 / numero2;

while(i != 0){
        printf("\n[1] Media entre os numeros digitados"
            "\n[2] Diferenca do maior pelo menor"
            "\n[3] Produto entre os numeros digitados"
            "\n[4] Divisao do primeiro pelo segundo"
            "\nOpcao: ");
        scanf("%i", &i);

        switch (i){
        case 1:
            printf("Media entre %.2f e %.2f vale %.2f\n\n", numero1, numero2, media);
            break;
        case 2:
            printf("Diferenca entre %.2f e %.2f vale %.2f\n\n", maior, menor, diferenca);
            break;
        case 3:
            printf("Produto entre %.2f e %.2f vale %.2f\n\n", numero1, numero2, produto);
            break;
        case 4:
            printf("Divisao entre %.2f e %.2f vale %.2f\n\n", numero1, numero2, divisao);
            break;
        default:
            printf("OPCAO INVALIDA");
            i = 0;
            break;
        }
    }

    return(0);
}