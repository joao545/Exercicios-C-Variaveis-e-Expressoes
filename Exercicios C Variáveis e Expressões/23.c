#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 23

/*
Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula
de conversao e: J = M / 0,91 , sendo J o comprimento em jardas e M o comprimento em metros.
*/


int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o comprimento
    float metros;
    printf("Digite o comprimento em metros: \n");
    scanf("%f", &metros);
    printf("O comprimento tem %fm \n", metros);

    //Conversao de jardas para metros.
    float ConversaoJardas = metros / 0.91;
    printf("O comprimento de %fm foi convertido para %fyd ", metros, ConversaoJardas);


    return 0;
}
