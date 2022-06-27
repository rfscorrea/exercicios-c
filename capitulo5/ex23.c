/*
 DESCRICÇÃO: 
 Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
    Salario                             % de aumento
Até R$ 210,00                           15%
De R$ 210,00 a R$ 600,00 (inclusive)    10%
Acima de R$ 600,00                      5%

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.

Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de meses de trabalho dividido por 12.
 
Na opção 4: sair do programa. 


 */

#include <stdio.h>

int main(){
    int resposta, mesesTrabalhados, porcentagem;
    float salario, aumento, salarioNovo, ferias, decimoTerceiro;

    while(resposta){
        printf(
            "\n\n[1]valor novo salario"
            "\n[2]valor ferias"
            "\n[3]valor decimo terceiro"
            "\n[4]sair"
            "\nResposta: "
        );
        scanf("%i%*c", &resposta);

        if(resposta == 4){
            break;
        }

        switch(resposta){
            case 1:
                printf("Salario: R$");
                scanf("%f%*c", &salario);

                if(salario <= 210){
                    porcentagem = 15;
                    aumento = 0.15 * salario;
                    salarioNovo = salario + aumento;
                }
                else if(salario > 210 && salario <= 600){
                    porcentagem = 10;
                    aumento = 0.1 * salario;
                    salarioNovo = salario + aumento;
                }
                else{
                    porcentagem = 5;
                    aumento = 0.05 * salario;
                    salarioNovo = salario + aumento;
                }

                printf(
                    "\nSalario antigo: R$%.2f"
                    "\nAumento: %i%%"
                  "\nSalario novo: R$%.2f", salario, porcentagem, salarioNovo
             );

                break;
            case 2:
                printf("Salario: R$");
                scanf("%f%*c", &salario);

                ferias = salario * 1.333;

                printf(
                    "\nSalario: R$%.2f"
                    "\nValor ferias: R$%.2f", salario, ferias
                );

                break;
            case 3:
                printf("Salario: R$");
                scanf("%f%*c", &salario);
                printf("Meses trabalhados: ");
                scanf("%i%*c", &mesesTrabalhados);

                decimoTerceiro = (salario * mesesTrabalhados) / 12;

                printf(
                    "\nSalario: R$%.2f"
                    "\nMeses: %i meses trabalhados"
                    "\nDecimo T.: R$%.2f", salario, mesesTrabalhados, decimoTerceiro
                );

                break;
            default:
                printf("=== Valor invalido! ===");
                break;
        }
    }

    return(0);
}