/* 25) Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:
Tipo    Descrição              Rendimento mensal
1       Poupança                    1,5%
2       Poupança plus               2%
3       Fundos de renda fixa        4%
 
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar
o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.
 */

#include <stdio.h>

int main(){
    int resposta, codigoCliente;
    float rendimento, valorInvestido, juros;

    while(codigoCliente > 0){
        printf("\ncodigo cliente: ");
        scanf("%i%*c", &codigoCliente);

        if(codigoCliente <= 0){
            break;
        }

        printf(
            "\n[1]poupanca"
            "\n[2]poupanca plus"
            "\n[3]fundos renda fixa"
            "\nResposta: "
        );
        scanf("%i%*c", &resposta);

        printf("Valor investido: R$");
        scanf("%f%*c", &valorInvestido);

        switch(resposta){
            case 1:
                rendimento = 1.5;
                juros = (rendimento / 100) * (valorInvestido);
                break;
            case 2:
                rendimento = 2;
                juros = (rendimento / 100) * (valorInvestido);
                break;
            case 3:
                rendimento = 4;
                juros = (rendimento / 100) * (valorInvestido);
                break;
            default:
                printf("valor invalido!");
                break;
        }

        printf(
            "\n\nValor investido: R$%.2f"
            "\nJuros pagos: R$%.2f\n", valorInvestido, juros
        );
    }

    printf("=== FIM ===");
    return(0);
}