#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 14

/*Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de 
conversao e: M = K / 1,61 , sendo K a distancia em quilometros e M em milhas.*/

void main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo a distancia.
    float Km;
    printf("Digite a distância em km: \n");
    scanf("%f", &Km);
    printf("Distância de %fkm \n", Km);


    //Conversao Km para milhas
    float ConversaoMilhas = Km / 1.61;
    printf("Foram %f quilômetros convertidos em %f milhas", Km, ConversaoMilhas);

    
}