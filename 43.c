#include <stdio.h>
#include <stdlib.h>

/*3.  Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com des-                                                                                                                                ˜ conto)
• a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/

//ex de item: Violão Harley Benton = 1339R$

int main(){

    float valor_vista;
    scanf("%f", &valor_vista);
    printf("Valor do item: %f \n", valor_vista);

    //Total a pagar com desconto de 10%
    float pagamento_desconto = valor_vista - (valor_vista * 10) / 100;
    printf("Item pago com 10 por cento de desconto: %fR$ \n", pagamento_desconto);

    //o valor de cada parcela, no parcelamento de 3× sem juros
    float pagamento_parcelado = valor_vista / 3;
    printf("valor de cada parcela em parcelado 3x: %fR$ \n", pagamento_parcelado);

    //a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
    float comissao_vista = (pagamento_desconto * 5) / 100;
    printf("Comissao vendedor em pagamento a vista: %fR$ \n", comissao_vista);

    //a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
    float comissao_parcelada = (valor_vista * 5) / 100;
    printf("Comissao vendedor em pagamento parcelado: %fR$", comissao_parcelada);


    return 0;
}