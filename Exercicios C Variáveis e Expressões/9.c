#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 9

/*Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A formula de conversao e: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s.*/

void main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o valor
    float MetrosSegundo;
    printf("Digite a velocidade em m/s: \n");
    scanf("%f", &MetrosSegundo);
    printf("A velocidade vai ser em %fm/s \n", MetrosSegundo);

    //Conversao
    float ConversaoKm = MetrosSegundo * 3.6;
    printf("%fm/s convertidos em %fkm/h ", MetrosSegundo, ConversaoKm);



    
}