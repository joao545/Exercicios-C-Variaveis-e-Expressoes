#include <stdio.h>
#include <stdlib.h>

/*
52. Tres amigos jogaram na loteria. Caso eles ganhem, o premio deve ser repartido proporcionalmente ao valor que cada um deu para a realização da aposta
Faça um programa que leia quanto cada apostador investiu, o valor do premio, e imprima quanto cada um ganharia do premio com base no valor investido.
*/

/*repartição proporcional é uma forma de dividir um número de maneira proporcional a uma sequência de outros números.
Por exemplo, dividir o número 396 em partes diretamente proporcionais a 2, 4 e 6.*/

int main(){
    //Lendo valores de cada aposta e valor do premio.
    int aposta1, aposta2, aposta3;
    int premio;

    //Apostas
    printf("Escreva valor de cada aposta: ");
    scanf("%d %d %d", &aposta1, &aposta2, &aposta3);
    printf("Aposta1: %d \nAposta2: %d \nAposta3: %d \n", aposta1, aposta2, aposta3);

    system("Pause");
    
    //Premio
    printf("Escreva valor do premio: ");
    scanf("%d", &premio);
    printf("Premio da loteria: %d \n", premio);


    //Fazendo a repartição proporcional.
    int reparticao1 = premio / aposta1;
    int reparticao2 = premio / aposta2;
    int reparticao3 = premio / aposta3;

    
    //Quanto cada um ganhou de acordo com a aposta proporcional.
    printf("ganho da aposta1: %d \nganho da aposta2: %d \nganho da aposta3: %d", reparticao1, reparticao2, reparticao3);


    return 0;
}