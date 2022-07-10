/*
2) Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
    || os números múltiplos de 2;
    || os números múltiplos de 3;
    || os números múltiplos de 2 e de 3. 
 */

#include <stdio.h>


void imprimirvetor(char titulo[100], int tamanho, int v[tamanho]){
    int i;
    
    printf("\n%s", titulo);
    
    for(i = 0; i < tamanho-1; i++){
        printf("%i, ", v[i]);
    }
    printf("%i\n", v[tamanho-1]);
}


int main(){
    int i;
    int n;
    int multiploDois[7], multiploTres[7], multiploAmbos[7];
    int dois = 0, tres = 0, ambos = 0;

    for(i = 0; i < 7; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &n);

        if(n % 2 == 0 && n % 3 == 0){
            multiploAmbos[ambos] = n;
            ambos++;
        }
        else if(n % 2 == 0){
            multiploDois[dois] = n;
            dois++;
        }
        else if(n % 3 == 0){
            multiploTres[tres] = n;
            tres++;
        }
    }

    imprimirvetor("Multiplo de 2: ", dois, multiploDois);
    imprimirvetor("Multiplo de 3: ", tres, multiploTres);
    imprimirvetor("Multiplo de 2 e 3: ", ambos, multiploAmbos);

    return 0;    
}