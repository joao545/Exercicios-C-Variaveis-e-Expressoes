#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*
A importancia de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso.
Sendo que da quantia total:
• O primeiro ganhador recebera 46%;
• O segundo recebera 32%;  ́
• O terceiro recebera o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

void main(){
    setlocale(LC_ALL, "");

    //Inicio
    double premio_concurso = 780.00000;
    printf("Valor do premio: %lf \n", premio_concurso);
    printf("Havera tres vencedores.\n");

    //Calculando ganhos por ganhador
    double ganho1 = (46 * premio_concurso) / 100; //primeiro ganhador
    double ganho2 = (32 * premio_concurso) / 100; //segundo ganhador
    double ganho3 = (22 * premio_concurso) / 100; //terceiro ganhador

    printf("O primeiro vencedor ganhou: %lf\n", ganho1);
    printf("O segundo vencedor ganhou: %lf\n", ganho2);
    printf("O terceiro vencedor ganhou: %lf\n", ganho3);

}
