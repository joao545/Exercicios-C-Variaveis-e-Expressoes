#include <stdio.h>
/*
Leia um numero inteiro de 4 dıgitos (de 1000 a 9999) e imprima 1 dıgito por linha.
*/

int main(){
    
    int limite, i;
    limite = 9999;
    for(i = 1000; i <= limite; ++i)
        printf("numero %d\n", i);

    return 0;

}
