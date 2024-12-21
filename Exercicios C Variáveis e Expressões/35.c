#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
35. Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
hipotenusa = a2 + b 2. Faca um programa que receba os valores de a e b e calcule o valor da hipotenusa atraves da equacao.
Imprima o resultado dessa operacao.*/

//Obs: a teorema de pitágoras é a soma dos catetos ao quadrado igual ao quadrado da hipotenusa.

void main(){
    setlocale(LC_ALL, "");

    //Lendo valores dos catetos.
    double cateto_a, cateto_b;
    printf("Valores dos catetos a e b: ");
    scanf("%lf %lf", &cateto_a, &cateto_b);
    printf("Valor do cateto a: %lf \nvalor do cateto b: %lf", cateto_a, cateto_b);

    //calculando a hipotenusa
    double soma_catetos = pow(cateto_a, 2) + pow(cateto_b, 2);
    printf("\nSoma dos catetos ao quadrado = %lf", soma_catetos);
    double hipotenusa = sqrt(soma_catetos);
    printf("\nHipotenusa do triângulo retângulo: %lf", hipotenusa);

}

