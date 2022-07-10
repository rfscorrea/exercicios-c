/*
3) Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá
preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:
 
|| se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;
|| cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;
|| efetuar a atualização do estoque somente se o pedido for atendido integralmente;
|| no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados. 
 */

#include <stdio.h>


void mostrarprodutos(int m[2][10]){
    int i;

    for(i = 0; i < 10; i++){
        printf("\nCodigo %i : %i no estoque", m[0][i], m[1][i]);
    }
}


int main(){
    int produtos[2][10];
    int i;
    int cliente, produto, quantidade;

    for(i = 0; i < 10; i++){
        printf("Codigo do produto: ");
        scanf("%i%*c", &produtos[0][i]);
        printf("Total do produto em estoque: ");
        scanf("%i%*c", &produtos[1][i]);
    }

    while(cliente){
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Codigo do cliente: ");
        scanf("%i%*c", &cliente);
        if(cliente == 0){break;}
        printf("Codigo do produto: ");
        scanf("%i%*c", &produto);
        printf("Quantidade que deseja comprar: ");
        scanf("%i%*c", &quantidade);
        
        i = 0;
        while(i<10){
            if(produtos[0][i] == produto){
                if(produtos[1][i] >= quantidade){
                    produtos[1][i] = produtos[1][i] - quantidade;
                    printf("\n~~~~ PEDIDO ATENDIDO. OBRIGADO E VOLTE SEMPRE! ~~~~\n");
                    break;
                }
                else{
                    printf("\n~~~~ NAO TEMOS ESTOQUE SUFICIENTE DESSA MERCADORIA ~~~~\n");
                    break;
                }

            }
            
            i++;

            if(i == 10){
                printf("\n~~~~ CODIGO INEXISTENTE! ~~~~\n");
                break;
            }
        }
    }

    mostrarprodutos(produtos);

    return 0;
}