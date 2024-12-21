#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.  ́

int main(){
    setlocale(LC_ALL, "");

    //Lado quadrado
    float lado;
    scanf("%f", &lado);
    printf("numero do lado: %f \n", lado);

    system("Pause");

    float area_quadrado = lado * 2;
    printf("A area do quadrado e: %f", area_quadrado);

}

