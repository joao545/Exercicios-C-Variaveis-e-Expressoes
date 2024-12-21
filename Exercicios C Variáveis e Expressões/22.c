#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 22

/*
Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula
de conversao e: M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.
*/


int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o comprimento
    float Jardas;
    printf("Digite o comprimento em jardas: \n");
    scanf("%f", &Jardas);
    printf("O ângulo tem %fyd \n", Jardas);

    //Conversao de jardas para metros.
    float ConversaoMetros = 0.91 * Jardas;
    printf("O comprimento de %fyd foi convertido para %fm ", Jardas, ConversaoMetros);


    return 0;
}