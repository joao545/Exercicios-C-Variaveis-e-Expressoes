#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

void main(){
    setlocale(LC_ALL, "");

    //Lendo n�mero
    int a;
    printf("Digite um n�mero: \n");
    scanf("%d", &a);
    printf("N�mero %d \n", a);


    int antecessor = a - 1;
    int sucessor = a + 1;
    printf("O antecessor do n�mero %d � %d e o sucessor de %d � %d.", a, antecessor, a, sucessor);


}
