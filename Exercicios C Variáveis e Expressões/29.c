#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 29

/*Leia quatro notas, calcule a media aritmetica e imprima o resultado*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo notas
    float nota1, nota2, nota3, nota4;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    printf("Notas: %f, %f, %f, %f \n", nota1, nota2, nota3, nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Média das notas: %f", media);

    
    return 0;
}