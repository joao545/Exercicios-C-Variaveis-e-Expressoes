#include <stdio.h>
#include <stdlib.h>

/*
50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
*/


int main(){

    //Ler idade e ano atual.
    printf("Digite a idade de fulano e o ano atual: ");
    int idade;
    int ano;
    scanf("%d %d", &idade, &ano);
    printf("idade: %d; \nano atual: %d \n", idade, ano);


    int ano_nascimento = ano - idade;
    printf("Fulano nasceu em: %d", ano_nascimento);

    //Pegando a idade pelo ano.
    /*int resto = idade % ano;
    printf("%d", resto);*/

    return 0;
}