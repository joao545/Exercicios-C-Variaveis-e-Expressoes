#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
40.  Uma empresa contrata um encanador a R$ 30,00 por dia. Faca um programa que solicite o numero de dias trabalhados
 pelo encanador e imprima a quantia lıquida que devera ser paga, sabendo-se que sao descontados 8% para imposto de renda.
 */

 //Considerando que o contrato do encanador com a empresa é de 20 dias.

void main(){
    setlocale(LC_ALL, "");

    //Quanto o ganhador recebe por dia.
    float ganho_dia = 30.00;
    printf("O encanador recebe %fR$ por dia. \n", ganho_dia);

    //Soma dos dias trabalhados.
    float soma_dias = ganho_dia * 20;
    printf("Valor somados dos 20 dias: %f \n", soma_dias);

    //Valor do imposto de 8% por cima da soma.
    float valor_imposto = (8 * soma_dias) / 100;
    printf("Soma com o imposto de renda: %f \n", valor_imposto);

    //Valor final do contrato descontado com o imposto de renda.
    float recebimento_oficial = soma_dias - valor_imposto;
    printf("O valor final do contrato com o imposto de renda vai ser de: %f", recebimento_oficial);
}

