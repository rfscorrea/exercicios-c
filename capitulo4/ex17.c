/*
17) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.
 */

#include <stdio.h>

int main(){
   int senha;

   printf("Digite senha: ");
   scanf("%i", &senha);

   if(senha == 4531){
    printf("VALIDO!!!");
   } 
   else{
    printf("INVALIDO!!!");
   }

    return(0);
}