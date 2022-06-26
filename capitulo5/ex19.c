/*19) Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
 
    || o lucro de cada ação comercializada;
    || a quantidade de ações com lucro superior a R$ 1.000,00;
    || a quantidade de ações com lucro inferior a R$ 200,00;
    || o lucro total da empresa.
Finalize com o tipo de ação ‘F’.
 */

#include <stdio.h>
#include <string.h>
#define valorMaximo 5000

int main(){
    char acoes[valorMaximo];
    float acoesLucro[valorMaximo];
    float acaoValor_compra, acaoValor_venda, acaoLucro;
    int acoesLucro_superior = 0, acoesLucro_inferior = 0;
    float totalLucro = 0;
    int i = 0, k = 0;

    while(i != -1){
        printf("Tipo da acao: ");
        scanf("%c%*c", &acoes[i]);

        if(acoes[i] == 'f'){
            break;
        }

        printf("Valor de compra: R$");
        scanf("%f%*c", &acaoValor_compra);
        printf("Valor de venda: R$");
        scanf("%f%*c", &acaoValor_venda);

        acaoLucro = acaoValor_venda - acaoValor_compra;

        if(acaoLucro > 1000){
            acoesLucro_superior++;
        }
        else if(acaoLucro < 200){
            acoesLucro_inferior++;
        }

        totalLucro += acaoLucro;
        acoesLucro[i] = acaoLucro;
        i++;
    }

    
    for(k = 0; k < i; k++){
        printf("\nAcao '%c' com lucro de R$%.2f", acoes[k], acoesLucro[k]);
    }
    printf(
        "\nAcoes com lucro superior: %i acoes"
        "\nAcoes com lucro inferior: %i acoes" 
        "\nLucro total: R$%.2f"
        , acoesLucro_superior, acoesLucro_inferior, totalLucro
    );

    return(0);
}