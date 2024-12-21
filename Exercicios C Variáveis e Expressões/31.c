#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

void main(){
    setlocale(LC_ALL, "");

    //Lendo número
    int a;
    printf("Digite um número: \n");
    scanf("%d", &a);
    printf("Número %d \n", a);


    int antecessor = a - 1;
    int sucessor = a + 1;
    printf("O antecessor do número %d é %d e o sucessor de %d é %d.", a, antecessor, a, sucessor);


}
