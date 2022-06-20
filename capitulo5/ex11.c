/*
11) Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
    || o preço final para compra à vista tem desconto de 20%;
    || a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
    || os percentuais de acréscimo encontram-se na tabela a seguir (tabela presente na pagina 148). 
 */

#include <stdio.h>

int main(){
    float valorCarro, valorFinal, valorParcela = 0, juros = 0;
    int quantidadeParcelas = 0;
    int i;

    printf("Valor do carro: R$");
    scanf("%f", &valorCarro);

    valorFinal = valorCarro * 0.8;

for(i=0; i<11; i++){
        printf(
            "\nValor final: R$%.2f "
            "\nQuantidade de parcelas: %i "
            "\nValor da parcela: R$%.2f"
            "\n==========================", 
            valorFinal, quantidadeParcelas, valorParcela
        );
        quantidadeParcelas += 6;
        valorParcela = (valorCarro / quantidadeParcelas) * (1 + juros);
        valorFinal = quantidadeParcelas * valorParcela;
    }



    return(0);
}