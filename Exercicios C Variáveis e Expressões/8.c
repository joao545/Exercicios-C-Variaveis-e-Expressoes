#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de conversao e: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo a temperatura
    float Kelvin;
    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &Kelvin);
    printf("\n A temperatura Kelvin é: %fºK", Kelvin);

    system("Pause");

    //Conversao em Celsius.
    float Conversao = Kelvin - 273.15;
    printf("\n Temperatura Kelvin convertida em %fºC", Conversao);
    
    
    return 0;
}
