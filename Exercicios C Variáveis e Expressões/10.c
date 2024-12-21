#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo a velocidade
    float a;
    printf("Digite a velocidade em km/h: \n");
    scanf("%f", &a);
    printf("Velocidade de %fkm \n", a);

    //Conversao para m/s
    float Conversao = a/3.6;
    printf("%f km/h convertidos para %f m/s", a, Conversao);
    

    
}