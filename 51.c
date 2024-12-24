#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
51. Escreva um programa que leia as coordenadas x e y de pontos no R² e calcule sua distancia da origem (0, 0).
*/

//R² significa plano euclidiano.
//Calcule a distância os pontos P1 e P2 do plano euclidiano utilizando a fórmula da imagem da pasta.


int main(){
    
    //Coordenadas de P2.
    float P2x = 12;
    float P2y = 3;


    //Lendo o pontos x1 e y1 do ponto P1.
    printf("Digite a distancia P1: \n");
    float P1x;
    float P1y;
    scanf("%f %f", &P1x, &P1y);
    printf("distancia P1: (%fx, %fy) \n", P1x, P1y);

    //Coodernadas P1 e P2 
    printf("Coordenadas P1: (%fx, %fy) \nCoodernadas P2: (%fx, %fy) \n", P1x, P1y, P2x, P2y);

    system("Pause");

    //Calculando a distância entre os pontos P1 e P2, obs: raiz quadrada sendo arredonda.
    float distancia_pontos = sqrt(pow((P1x - P1y), 2) + pow((P2x - P2y), 2));
    printf("distancia: %f", round(distancia_pontos));


    return 0;
}