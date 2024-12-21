#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
30. Leia um valor em real e a cotacao do dolar. Em seguida, imprima o valor correspondente  ́
em dolares.  ́
*/


void main(){
    setlocale(LC_ALL, "");

    //Lendo o valor
    float real;
    printf("Digite o valor em reais. \n");
    scanf("%f", &real);
    printf("Valor inserido: %fR$ \n", real);

    //Imprimindo em dólares
    float dolar = 6.06;
    float conversao = real * dolar;
    printf("%fR$ para o dolar fica %f $", real, conversao);

}
