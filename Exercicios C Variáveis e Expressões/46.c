#include <stdio.h>
#include <stdlib.h>

/*
46. Faca um programa que leia um numero inteiro positivo de tres dıgitos (de 100 a 999).
Gere outro numero formado pelos dıgitos invertidos do numero lido. Exemplo: Numero lido = 123, Numero gerado = 321.
*/

int main(){
    int numero, cifra;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    if(numero >= 0){
        do{
            cifra = numero % 10;
            printf("%d", cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");
    }
    else if (numero < 1){
        numero = numero * -1;
        
        printf("-");

        do{
            cifra = numero % 10;
            printf("%d", cifra);
            numero /= 10;
        }while (numero != 0);

        printf("\n");
    }

    return 0;
}