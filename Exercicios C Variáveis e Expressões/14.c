#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 14 

/*Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
e: R = G ∗ π/180, sendo G o angulo em graus e R em radianos e π = 3.14.*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o angulo
    float AnguloGraus;
    printf("Digite o angulo em graus: \n");
    scanf("%f", &AnguloGraus);
    printf("O ângulo tem %fº \n", AnguloGraus);

    //Conversao de graus para radianos.
    float ConversaoRadianos = AnguloGraus * (3.14 / 180);
    printf("O angulo de %fº foi convertido para %f rad", AnguloGraus, ConversaoRadianos);

    return 0;
}