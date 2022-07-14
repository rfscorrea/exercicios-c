/*
6) Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
    || um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
    || o total das vendas de todos os vendedores;
    || o maior valor a receber e o nome de quem o receberá;
    || o menor valor a receber e o nome de quem o receberá. 
 */

#include <stdio.h>

int main(){
    float totalvendas[10];
    float percentualcomissao[10];
    float total = 0;
    char vendedores[10][1000];
    int indiceNomeMaior, indiceNomeMenor;
    float valorMaior = 0, valorMenor = 0;
    float valorReceber;
    int i;

    for(i=0; i<10; i++){
        printf("\nTotal de vendas vendedor %i: R$", i+1);
        scanf("%f%*c", &totalvendas[i]);
        printf("Comissao do vendedor %i: ", i+1);
        scanf("%f%*c", &percentualcomissao[i]);
        printf("Nome do vendedor %i: ", i+1);
        fgets(vendedores[i], 1000, stdin);

        total += totalvendas[i];
        valorReceber = totalvendas[i] * (1 + (percentualcomissao[i] / 100));

        if(i==0){
            valorMaior = valorReceber;
            valorMenor = valorReceber;
            indiceNomeMaior = i;
            indiceNomeMenor = i;
        }
        else{
            if(valorReceber > valorMaior){
                valorMaior = valorReceber;
                indiceNomeMaior = i;
            }
            else if(valorReceber < valorMenor){
                valorMenor = valorReceber;
                indiceNomeMenor = i;
            }
        }
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\nVendedor: Valor a receber\n");
    for(i=0; i<10; i++){
        printf("\n%s:R$%.2ff", vendedores[i], totalvendas[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Total de vendas todos vendedores: R$%.2f", total);
    printf("\nMaior valor a receber: %.2f \nVendedor: %s", valorMaior, vendedores[indiceNomeMaior]);
    printf("\nMenor valor a receber: %.2f \nVendedor: %s", valorMenor, vendedores[indiceNomeMenor]);
    return 0;
}