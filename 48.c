#include <stdio.h>

/*
48.  Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/
// 1 hora tem 3600 minutos, 1 minuto tem 60, 1 segundo é um segundo.

int main(){
    //Digitando um numero em segundos
    int numero;
    printf("Digite um numero: %d \n", numero);
    scanf("%d", &numero);
    printf("Numero_segundos: %d \n", numero);

    //conversão dos segundos para minutos e para horas.  
    int minutos = numero / 60;
    printf("Numero de segundos em minutos: %d\n", minutos);

    int horas = (numero / 60) / 60;
    printf("Numero de segundos em horas: %d", horas);

    return 0;
}