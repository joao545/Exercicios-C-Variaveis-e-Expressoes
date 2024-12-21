#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 12

/*Leia uma distancia em milhas e apresente-a convertida em quilometros. A formula de 
conversao e: K = 1,61 ∗ M, sendo K a distancia em quilometros e M em milhas.*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o valor
    float milhas;
    printf("Digite a distancia em milhas: \n");
    scanf("%f", &milhas);
    printf("Distancia em milhas: %f \n", milhas );

    //Fazendo a conversao.
    float ConversaoKm = 1.61 * milhas;
    printf(" %fmilhas convertidas em %fKm", milhas, ConversaoKm);
    
}