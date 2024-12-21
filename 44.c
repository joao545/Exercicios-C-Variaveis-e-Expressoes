#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
44.  Receba a altura do degrau de uma escada e a altura que o usuario deseja alcancar subindo a escada.
 Calcule e mostre quantos degraus o usuario devera subir para atingir seu objetivo.
*/

//A altura entre dois degraus de uma escada deve estar entre 15,5 cm e 19 cm, com uma variação máxima de 0,5 cm entre um e outro.
//Para calcular a quantidade de degraus necessários, deve-se dividir a altura total da escada por 0,18.

//Considerar uma altura de 10m

int main(){

    float degrau = 16.5 / 2;
    float altura = 10;
    printf("Altura da escada: %fm; Degrau da escada: %fcm \n", altura, degrau);


    //Calculando quantidade de degraus.
    float qtd_degraus = round(altura / 0.18);
    printf("Quantidade de degraus na escada sera de: %f", qtd_degraus);


    return 0;
}