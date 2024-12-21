#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 17

/*
Leia um valor de comprimento em centımetros e apresente-o convertido em polegadas.
A formula de conversao e: P = C / 2,54 , sendo C o comprimento em centımetros e P o comprimento em polegadas
*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o valor
    float Centimetros;
    printf("Digite o valor em centímetros: \n");
    scanf("%f", &Centimetros);
    printf("O valor em centímetros vai ser: %fcm \n", Centimetros);

    //Conversao para polegadas.
    float ConversaoPolegadas = Centimetros / 2.54;
    printf("Foram convertidos %fcm para %f polegadas.", Centimetros, ConversaoPolegadas);
    
    

    return 0;
}