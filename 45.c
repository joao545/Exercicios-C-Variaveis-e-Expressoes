#include <stdio.h>
#include <stdlib.h>

/*
45.  Faca um programa para converter uma letra maiuscula em letra minuscula. Use a tabela ASCII para resolver o problema.
*/

int main(){

    //Letra maiúscula
    char maiusculo;
    int minusculo;

    printf("Digite uma letra maiuscula: \n");
    scanf("%c", &maiusculo);


    //Passando para minúsculo.
    minusculo = maiusculo + 32;
    
    printf("A letra digitada em minusculo e: %c", minusculo);

    return 0;
}

