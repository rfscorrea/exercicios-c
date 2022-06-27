/* 24) Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
    || para encerrar a entrada de dados, deve ser digitado o valor zero;
    || para valores negativos, deve ser enviada uma mensagem;
    || os valores negativos ou iguais a zero não entrarão nos cálculos.
 */

#include <stdio.h>
#define valorMaximo 1000

int main(){
    int numeros[valorMaximo], maior, menor;
    int i=0;

    while(i!=-1){
        printf("Numero %i: ", i+1);
        scanf("%i%*c", &numeros[i]);

         if(numeros[i] == 0){
            break;
        }

        if(i==0){
            maior = numeros[i];
            menor = numeros[i];
        }

        else if(numeros[i] < 0){
            printf("Valores negativos nao sao validos!\n");
        }

        else{
            if(numeros[i] > maior){
                maior = numeros[i];
            }
            else if(numeros[i] < menor){
                menor = numeros[i];
            }
        }

        i++;
    }

    printf(
        "\nMaior: %i"
        "\nMenor: %i", maior, menor
    );

    return(0);
}