#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 16

/*
 Leia um valor de comprimento em polegadas e apresente-o convertido em centımetros.
A formula de conversao e: C = P ∗ 2,54, sendo C o comprimento em centımetros e P o
comprimento em polegadas.
*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o angulo
    float Polegadas;
    printf("Digite o comprimento em polegadas: \n");
    scanf("%f", &Polegadas);
    printf("O comprimento tem %f polegadas \n", Polegadas);

    //Conversao de polegadas para centímetros.
    float ConversaoCentimetros = Polegadas * 2.54;
    printf("O comprimento de %f polegadas foi convertido para %fcm ", Polegadas, ConversaoCentimetros);


    return 0;
}