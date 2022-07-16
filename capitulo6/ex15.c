/*
15) Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito. 
 */

#include <stdio.h>

int main(){
    char nomes[8][100];
    int dvds[8], dvdgratis;
    int i;

    for(i=0; i<8; i++){
        printf("\nCliente %i: ", i+1);
        gets(nomes[i]);
        printf("Dvds alugados: ");
        scanf("%i%*c", &dvds[i]);
    }

    for(i=0; i<8; i++){
        dvdgratis = dvds[i] / 10;

        printf(
            "\nCliente: %s"
            "\nDvds alugados: %i"
            "\nTem direito a %i dvds gratis", nomes[i], dvds[i], dvdgratis
        );
    }


    return 0;
}