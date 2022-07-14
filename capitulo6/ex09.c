/*
9) Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos produtos.
Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão
aumento.
Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.
 */

#include <stdio.h>

int main(){
    char nome[1000], produtos_nomes[10][1000];
    int codigo, produtos_codigos[10];
    float preco, produtos_precos[10];
    float preco_aumento[10];
    int i;

    for(i=0; i<10; i++){
        printf("\nNome do produto %i: ", i+1);
        fgets(produtos_nomes[i], 1000, stdin);
        printf("Codigo do produto %i: ", i+1);
        scanf("%i%*c", &produtos_codigos[i]);
        printf("Preco do produto %i: R$", i+1);
        scanf("%f%*c", &produtos_precos[i]);

        if(produtos_codigos[i] % 2 == 0 && produtos_precos[i] > 1000){
        preco_aumento[i] = produtos_precos[i] * 1.2;
        }
        else if(produtos_codigos[i] % 2 == 0){
            preco_aumento[i] = produtos_precos[i] * 1.15;
        }
        else if(produtos_precos[i] > 1000){
            preco_aumento[i] = produtos_precos[i] * 1.10;
        }
        else{
            preco_aumento[i] = produtos_precos[i];
        }

    }

    for(i=0; i<10; i++){
        printf(
            "\n\nNome: %s"
            "Codigo: %i"
            "\nPreco: %.2fR$"
            "\nPreco aumento: %.2fR$", produtos_nomes[i], produtos_codigos[i], produtos_precos[i], preco_aumento[i]
        );
    }
    




    return 0;
}