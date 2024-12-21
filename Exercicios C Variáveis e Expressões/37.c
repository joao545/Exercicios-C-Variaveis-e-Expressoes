#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
37. Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%
*/

void main(){
    setlocale(LC_ALL, "");

    //Lendo valor do produto
    float valor;
    printf("Digite o valor do produto: \n");
    scanf("%f", &valor);
    printf("Valor do produto: %f\n", valor);

    //Imprimir o desconto
    float desconto = (12 * valor) / 100;
    printf("Desconto de 12 por cento no produto: %f", desconto);

}
