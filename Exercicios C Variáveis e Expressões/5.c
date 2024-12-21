#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
4.  Leia um numero real e imprima a quinta parte deste numero

--expressao que representa a quinta parte de um numero: X/5
*/


int main(){
    //Lendo e imprimindo número real.
    float real;
    printf("Digite um numero real: ");
    scanf("%f", &real);
    printf("Numero real impresso: %f \n", real);

    //Quinta parte do numero real
    float quinta = real / 5;
    printf("quinta parte do numero real: %f", quinta);



    return 0;
}