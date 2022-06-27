/* 20) Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
    1. Média aritmética
    2. Média ponderada
    3. Sair
 
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
 */

int resposta;
float nota1, nota2, nota3, mediaAritmetica, mediaPonderada;
int pesoNota1, pesoNota2, pesoNota3;

int main(){
    printf(
        "\n[1] media aritmetica"
        "\n[2] media ponderada"
        "\n[3] sair"
        "\nResposta: "
    );
    scanf("%i%*c", &resposta);

    switch(resposta){
        case 1:
            printf("Nota 1: ");
            scanf("%f%*c", &nota1);
            printf("Nota 2: ");
            scanf("%f%*c", &nota2);

            mediaAritmetica =(nota1 + nota2) / 2;

            printf("Nota 1: %.2f  Nota 2: %.2f  Media: %.2f", nota1, nota2, mediaAritmetica);

            break;
        case 2:
            printf("Nota 1: ");
            scanf("%f%*c", &nota1);
            printf("Peso da nota 1: ");
            scanf("%i", &pesoNota1);
            printf("Nota 2: ");
            scanf("%f%*c", &nota2);
            printf("Peso da nota 2: ");
            scanf("%i", &pesoNota2);
            printf("Nota 3: ");
            scanf("%f%*c", &nota3);
            printf("Peso da nota 3: ");
            scanf("%i", &pesoNota3);

            int somaPesos = pesoNota1 + pesoNota2 + pesoNota3;
            mediaPonderada = (nota1*pesoNota1 + nota2*pesoNota2 + nota3*pesoNota3) / somaPesos;

            printf(
                "\nNota 1: %.2f    Peso: %i"
                "\nNota 2: %.2f    Peso: %i"
                "\nNota 3: %.2f    Peso: %i"
                "\nMedia: %.2f", 
                nota1, pesoNota1, nota2, pesoNota2, nota3, pesoNota3, mediaPonderada
            );

            break;
        case 3:
            break;
    }

    return(0);
}