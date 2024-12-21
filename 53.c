#include <stdio.h>
#include <stdlib.h>

/*
53.Faca um programa para ler as dimensoes de um terreno (comprimento c e largura l), bem como o preco do metro de tela p.
 Imprima o custo para cercar este mesmo terreno com tela.
*/

int main(){
    //lendo dimensões.
    float c; //comprimento
    float l; //largura
    float p; //metro de tela
    printf("Digite o comprimento, largura e o preco do metro de tela: ");
    scanf("%f %f %f", &c, &l, &p);
    printf("Comprimento: %fm \nlargura: %fm \npreco por metro de tela: %fR$ \n", c, l, p);


    //Calculando a área do terreno.
    float area = l * c;
    printf("Area do terreno: %f\nm²", area);


    //Calculando custo com a tela
    float custo_tela = area * p;
    printf("Custo com a tela: %fR$", custo_tela);


    return 0;
}