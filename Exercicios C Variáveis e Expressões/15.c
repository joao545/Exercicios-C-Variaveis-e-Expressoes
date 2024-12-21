#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 15

/*
Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao
e: G = R ∗ 180/π, sendo G o angulo em graus e R em radianos e π = 3.14.
*/

int main(){
    setlocale(LC_ALL, "");

    //Digitando e lendo o angulo
    float Radianos;
    printf("Digite o angulo em radianos: \n");
    scanf("%f", &Radianos);
    printf("O ângulo tem %f rad \n", Radianos);

    //Conversao de graus para radianos.
    float ConversaoGraus = Radianos * (180 / 3.14);
    printf("O angulo de %f rad foi convertido para %fº", Radianos, ConversaoGraus);



    return 0;
}

