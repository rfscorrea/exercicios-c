/*
10) Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos.
 */

int main(){
    #define totalNumeros 3

    int numero, somaPrimo = 0, somaPar = 0, i = 0;

    while(i < 3){
        printf("Numero: ");
        scanf("%i", &numero);

        if(numero % 2 == 0){        // se for par
            if(numero == 2){
                somaPar += numero;
                somaPrimo += numero;
            }
            else{
                somaPar += numero;
            }
        }
        else{       // se for impar
            if(numero == 3 || numero == 5 || numero == 7){
                somaPrimo += numero;
            }
            else if(numero % 3 != 0 && numero % 5 != 0 && numero % 7 != 0){
                somaPrimo += numero;
            }
        }
        i++;
    }

    printf(
        "\nSoma par: %i"
        "\nSoma primos: %i", 
        somaPar, somaPrimo
    );

    return(0);
}