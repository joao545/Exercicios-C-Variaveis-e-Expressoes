#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Leia o valor do raio de um circulo e calcule e imprima a area do circulo correspondente.
A area do circulo e π ∗ raio2 , considere π = 3.141592.*/

int main(){
    setlocale(LC_ALL, "");

    //raio
    float raio;
    scanf("%f", &raio);
    printf("Valor do raio: %f \n", raio);

    float area_circulo = 3.14 * pow(raio, 2);
    printf("Area do circulo = %f \n", area_circulo);

    system("Pause");

    //teste exponenciacao
    float quadrado = pow(3, 2);
    printf("quadrado: %f", quadrado);

    return 0;
}
