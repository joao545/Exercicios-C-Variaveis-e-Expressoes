#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro.*/

int main(){
    setlocale(LC_ALL, "");

    //Lendo número
    int numero;
    printf("Digite um valor: \n");
    scanf("%d", &numero);
    printf("Número: %d \n", numero);

    system("Pause");

    //calculo
    int suc_triplo = (numero * 3) + 1;
    int ant_dobro = (numero * 2) -1 ;
    int soma = suc_triplo + ant_dobro;
    printf("Soma - sucessor do triplo %d com o antecessor do dobro %d do numero: %d", suc_triplo, ant_dobro, soma);



    return 0;
}
