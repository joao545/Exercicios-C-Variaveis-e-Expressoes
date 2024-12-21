#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 27

/* Leia um valor de area em hectares e apresente-o convertido em metros quadrados m2
A formula de conversao e: M = H ∗ 10000, sendo M a area em metros quadrados e H
a area em hectares.*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o comprimento
    float Hectares;
    printf("Digite o valor em hectares: \n");
    scanf("%f", &Hectares);
    printf("O valor tem %fhectares \n", Hectares);

    //Conversao de hectares para metros quadrados
    float ConversaoQuadrados = Hectares * 10000;
    printf("O valor de %f hectares foi convertido para %fm² ", Hectares, ConversaoQuadrados);


    return 0;
}