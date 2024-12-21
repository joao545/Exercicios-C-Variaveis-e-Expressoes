#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 20

/*
Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula 
de conversao e: L = K / 0,45 , sendo K a massa em quilogramas e L a massa em libras.
*/


int main(){
    setlocale(LC_ALL, "");

    //Digitando o valor da massa
    float Quilogramas;
    printf("Digite o valor em quilogramas: \n");
    scanf("%f", &Quilogramas);
    printf("Valor de %fkg \n", Quilogramas);

    
    //Conversao de quilogramas para libras.
    float ConversaoLibras = Quilogramas / 0.45;
    printf("Convertidos %fkg para %flb", Quilogramas, ConversaoLibras);

    
    return 0;
}