#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 26

/*Leia um valor de area em metros quadrados m2 e apresente-o convertido em hectares.
A formula de conversao e: H = M ∗ 0,0001 , sendo M a area em metros quadrados e H
a area em hectares*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o comprimento
    float MetrosQuadrados;
    printf("Digite o comprimento em metros quadrados: \n");
    scanf("%f", &MetrosQuadrados);
    printf("O ângulo tem %fm² \n", MetrosQuadrados);

    //Conversao de metros quadrados para hectares
    float ConversaoHectares = MetrosQuadrados * 0.0001;
    printf("O comprimento de %fm² foi convertido para %fhectares ", MetrosQuadrados, ConversaoHectares);


    return 0;
}