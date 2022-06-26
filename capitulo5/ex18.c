/*
18) Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F)
e salário. Faça um programa que calcule e mostre:
    || a média dos salários do grupo;
    || a maior e a menor idade do grupo;
    || a quantidade de mulheres com salário até R$ 200,00;
    || a idade e o sexo da pessoa que possui o menor salário.
Finalize a entrada de dados ao ser digitada uma idade negativa. 
 */

#include <stdio.h>
#define valorMaximo 9999999

int main(){
    int totalPessoas = 0;
    int idade = 0, idade_menorSalario, maiorIdade = 0, menorIdade; 
    int mulheres_com_salario_ate_200 = 0;
    char sexo, sexo_menorSalario;
    float salario, menorSalario = valorMaximo, totalSalario = 0, mediaSalario;

    while(idade >= 0){
        printf("\n\nIdade: ");
        scanf("%i%*c", &idade);

        if(idade < 0){break;}

        printf("Sexo [m]/[f]: ");
        scanf("%c%*c", &sexo);
        printf("Salario: ");
        scanf("%f%*c", &salario);

        if(salario < menorSalario){
            menorSalario = salario;
            sexo_menorSalario = sexo;
            idade_menorSalario = idade;
        }

        if(idade < menorIdade){
            menorIdade = idade;
        }
        else if (idade > maiorIdade){
            maiorIdade = idade;
        }

        if(sexo == 'f' && salario <= 200){
            mulheres_com_salario_ate_200++;
        }

        totalSalario += salario;
        totalPessoas++;
        mediaSalario = totalSalario / totalPessoas;
    }

    printf(
        "\nmedia dos salarios do grupo = R$%.2f"
        "\nmaior idade do grupo = %i"
        "\nmenor idade do grupo = %i"
        "\nquantidade de mulheres com salario ate R$ 200,00 = %i"
        "\n\npessoa que possui o menor salario"
        "\nidade = %i"
        "\nsexo = %c"
        "\nsalario: R$%.2f", 
        mediaSalario, maiorIdade, menorIdade, mulheres_com_salario_ate_200, idade_menorSalario, sexo_menorSalario, menorSalario 
    );

    return(0);
}