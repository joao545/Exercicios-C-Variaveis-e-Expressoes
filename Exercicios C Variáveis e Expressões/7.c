#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversao e: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.*/

void main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo graus
    float Fahrenheit;
    printf("Digite a temperatura em graus Fahrenheit: %f \n", Fahrenheit);
    scanf("%f", &Fahrenheit);
    printf("\n A temperatura vai ser: %f ºF", Fahrenheit);

    //Conversão
    float Conversao = 5.0 * (Fahrenheit - 32.0) / 9.0;
    printf("\n A temperatura Fº em Celsius: %f Cº", Conversao);

    
}