#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*38. Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que
ele recebeu um aumento de 25%.*/

void main(){
    setlocale(LC_ALL, "");

    //Lendo sal�rio
    float salario;
    printf("Digite o valor do sal�rio: \n");
    scanf("%f", &salario);
    printf("Sal�rio do colaborador de: %f\n", salario);

    //Novo sal�rio com aumento de 12%
    float aumento = 15 * salario / 100;
    printf("Valor do aumento: %f\n", aumento);
    float novo_salario = salario + aumento;
    printf("Novo sal�rio do colaborador: %f", novo_salario);

}
