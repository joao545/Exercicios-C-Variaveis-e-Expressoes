#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1.  4.  Leia um numero real e imprima o resultado do quadrado desse numero.
*/

int main(){
    //Lendo e imprimindo número real.
    float real;
    printf("Digite um numero real: ");
    scanf("%f", &real);
    printf("Numero real impresso: %f \n", real);

    //Quadrado do numero real
    float quadrado = pow(real, 2);
    printf("Numero real ao quadrado: %f", quadrado);



    return 0;
}