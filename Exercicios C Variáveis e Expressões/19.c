#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 19

/*
Leia um valor de volume em litros e apresente-o convertido em metros cubicos m3 
A formula de conversao e: M = L / 1000, sendo L o volume em litros e M o volume em metros cubicos. 
*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o volume
    float VolumeLitros;
    printf("Digite o volume em litros: \n");
    scanf("%f", &VolumeLitros);
    printf("O volume tem %f litros \n", VolumeLitros);

    //Conversao de Litros para Metros Cúbicos.
    float ConversaoMetrosCubicos = VolumeLitros / 1000;
    printf("O volume de %fL foi convertido para %fm³ ", VolumeLitros, ConversaoMetrosCubicos);

        
    return 0;
}