#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular e calculado por meio da seguinte formula:  ́ V = pi ∗ raio2 ∗ altura,
onde pi = 3.141592.
*/

void main(){
    setlocale(LC_ALL, "");

    //Lendo altura e o raio do cilindro
    double altura, raio;
    printf("Digite a altura e o raio do cilindro: ");
    scanf("%lf %lf", &altura, &raio);
    printf("Altura do cilindro: %lfcm \nRaio do cilindro: %lfcm", altura, raio);

    //Calculando o volume do cilindro.
    double formula = 3.14 * pow(raio, 2) * altura;
    printf("\nVolume do cilindro: %lfcm", formula);

}
