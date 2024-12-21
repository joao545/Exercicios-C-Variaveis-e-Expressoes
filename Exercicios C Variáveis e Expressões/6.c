#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8
/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de conversao e: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo a temperatura.
    float Celsius;
    printf("Digite a temperatura: \n");
    scanf("%f", &Celsius);
    printf("Temperatura em graus %fºC \n", Celsius);

    //Conversão Celsius para Kelvin
    float Conversao = Celsius + 273.15;
    printf("Temperatura Celsius convertida para: %fºK", Conversao);

    
    return 0;
}