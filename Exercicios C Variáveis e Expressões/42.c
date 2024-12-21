#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
42.  Receba o salario-base de um funcionario. Calcule e imprima o salario a receber,
 sabendo-se que esse funcionario tem uma gratiﬁcacao de 5% sobre o salario-base. 
 Alem disso, ele paga 7% de imposto sobre o salario-base.
 */

int main(){
    setlocale(LC_ALL, "");

    //salario do funcionario
    float salario_base;
    scanf("%f", &salario_base);
    printf("O funcionário recebera o salario de %fR$\n", salario_base);

    system("Pause");
    
    //gratificação de 5% + imposto de 7%
    float salario_gratificacao = salario_base + (salario_base * 5) / 100;
    float imposto = salario_gratificacao - (salario_gratificacao * 7) / 100;
    printf("salario com gratificacao = %f; salario final com impostos = %f", salario_gratificacao, imposto);


    return 0;
}