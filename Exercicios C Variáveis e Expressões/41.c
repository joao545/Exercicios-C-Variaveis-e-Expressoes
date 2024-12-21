#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
41.Faca um programa que leia o valor da hora de trabalho (em reais) e numero de horas trabalhadas no mes.
 Imprima o valor a ser pago ao funcionario, adicionando 10% sobre o valor calculado.
*/

//Ex: um analista de sistemas trabalha em média 42 horas semanais.

int main(){
    setlocale(LC_ALL, "");

    //Lendo valor da hora e horas mês
    float valor_hora, hora_trabalhada;
    scanf("%f %f", &valor_hora, &hora_trabalhada);
    printf("O colaborador recebe %fR$ por hora trabalhada, tendo %f horas trabalhadas no mes. \n", valor_hora, hora_trabalhada);

    //Valor pago ao funcionário + adicional de 10%
    float pagamento_mes = hora_trabalhada * valor_hora;
    float adicional_10 = (pagamento_mes * 10) / 100;
    printf("Apos o aumento de 10 por cento no salario, o funcionario recebera cerca de %fR$ por mes", adicional_10);

    return 0;
}