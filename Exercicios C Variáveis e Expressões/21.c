#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 21


/*
 Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula
de conversao e: K = L ∗ 0,45 , sendo K a massa em quilogramas e L a massa em libras
*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo a massa em libras
    float Libras;
    printf("Digite A massa em libras: \n");
    scanf("%f", &Libras);
    printf("A massa tem %flb \n", Libras);

    //Conversao de libras para quilogramas.
    float ConversaoQuilogramas = Libras * 0.45;
    printf("Convertidas %flb para %fkg", Libras, ConversaoQuilogramas);


    return 0;
}