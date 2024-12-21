#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 28

/* Faca a leitura de tres valores e apresente como resultado a soma dos quadrados dos
tres valores lidos..*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo valores
    int valor1, valor2, valor3;
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    printf("Valores inseridos: %d, %d, %d \n", valor1, valor2, valor3);

    int soma = valor1 + valor2 + valor3;
    printf("Resultado da soma: %d ", soma);

    
    return 0;
}