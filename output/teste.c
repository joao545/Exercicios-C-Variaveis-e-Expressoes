#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
35.Sejam a e b os catetos de um triangulo,  onde a hipotenusa e obtida pela equacao:  ˜
hipotenusa =  √a + b .  Faca um programa que receba os valores de a e b e calcule 22
 o valor da hipotenusa atraves da equacao. Imprima o resultado dessa operacao.

 obs: hipotenusa = soma dos catetos ao quadrado
*/

int main(){
    //Lendo valor dos catetos

    float cateto_a, cateto_b;
    scanf("%f %f", &cateto_a, &cateto_b);
    printf("Valor cateto a: %f, valor cateto b: %f \n", cateto_a, cateto_b);
   
    //Calculando a hipotenusa: somando os catetos ao quadrado e extraindo a raiz da soma6.
    float soma_catetos = pow(cateto_a, 2) + pow(cateto_b, 2);
    float raiz_hip = sqrt(soma_catetos);
    printf("A soma dos catetos: %f, raiz da hipotenusa: %f", soma_catetos, raiz_hip);

    return 0;
}