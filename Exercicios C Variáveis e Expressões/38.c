#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*38. Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que
ele recebeu um aumento de 25%.*/

void main(){
    setlocale(LC_ALL, "");

    //Lendo salário
    float salario;
    printf("Digite o valor do salário: \n");
    scanf("%f", &salario);
    printf("Salário do colaborador de: %f\n", salario);

    //Novo salário com aumento de 12%
    float aumento = 15 * salario / 100;
    printf("Valor do aumento: %f\n", aumento);
    float novo_salario = salario + aumento;
    printf("Novo salário do colaborador: %f", novo_salario);

}
