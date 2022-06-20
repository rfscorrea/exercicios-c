/*
1) Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida,
organize-os em ordem crescente e decrescente.
 */

#include <stdio.h>

int main(){
/*
    'x' e 'y' representam, respectivamente, ponteiros das linhas e colunas da matriz 'a'
    'z' representa o ponteiro seguinte ao ponteiro 'y' (z = y + 1) */
    int a[5][4], b[5][4], c[5][4];
    int x, y, z, variavelTemporaria;
    int k = 1;
    
    for(x=0; x<5; x++){
        printf("\n");
        for(y=0; y<4; y++){
            printf("a[%i][%i]: ", x, y);
            scanf("%i", &a[x][y]);
        }
    }

    printf("\n======= Matriz ========");
    for(x=0; x<5; x++){        // código para imprimir a matriz 'a'
        printf("\nGrupo %i: ", k);
        k++;
        for(y=0; y<4; y++){
            printf("%i ", a[x][y]);
        }
    }

    for(x=0; x<5; x++){
        for(y = 0; y < 4; y++){
            for(z = (y+1); z < 4; z++){
                if(a[x][y] > a[x][z]){      // algoritmo para ordem crescente( sinal '>')
                    variavelTemporaria = a[x][y];
                    a[x][y] = a[x][z];
                    a[x][z] = variavelTemporaria;
                }
            }
        }
    }

    k = 1;
    printf("\n=== Matriz Crescente====");
    for(x=0; x<5; x++){        // código para imprimir a matriz 'a'
        printf("\nGrupo %i: ", k);
        k++;
        for(y=0; y<4; y++){
            printf("%i ", a[x][y]);
        }
    }

    for(x=0; x<5; x++){
        for(y = 0; y < 4; y++){
            for(z = (y+1); z < 4; z++){
                if(a[x][y] < a[x][z]){      // algoritmo para ordem descrecente(sinal '<' )
                    variavelTemporaria = a[x][y];
                    a[x][y] = a[x][z];
                    a[x][z] = variavelTemporaria;
                }
            }
        }
    }

    k = 1;
    printf("\n=== Matriz Decrescente ===");
    for(x=0; x<5; x++){        // código para imprimir a matriz 'a'
        printf("\nGrupo %i: ", k);
        k++;
        for(y=0; y<4; y++){
            printf("%i ", a[x][y]);
        }
    }

    return(0);
}