#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 24

/*Leia um valor de area em metros quadrados m2 e apresente-o convertido em acres. A
formula de conversao e: A = M ∗ 0,000247, sendo M a area em metros quadrados e ´ A
a area em acres.*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o comprimento
    float MetrosQuadrados;
    printf("Digite o comprimento em metros quadrados: \n");
    scanf("%f", &MetrosQuadrados);
    printf("O ângulo tem %fm² \n", MetrosQuadrados);

    //Conversao de metros quadrados para acres
    float ConversaoMetros = MetrosQuadrados * 0.000247;
    printf("O comprimento de %fm² foi convertido para %facres ", MetrosQuadrados, ConversaoMetros);


    return 0;
}