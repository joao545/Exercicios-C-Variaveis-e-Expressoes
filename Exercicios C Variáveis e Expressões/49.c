#include <stdio.h>
#include <stdlib.h>

/*
49.Faca um programa para leia o horario (hora, minuto e segundo) de inicio e a duracao, em segundos, de uma experiencia biologica.
 O programa deve resultar com o novo horario (hora, minuto e segundo) do termino da mesma.
*/

//Hipótese: a experiência biológia vai ter 2 horas de duração.
//3600min é equivalente a 1 hora.

int main(){
    //horario de inicio: 19h e acaba 21h
    float hora_inicio, minuto_inicio, segundo_inicio;
    float duracao_horas, duracao_minutos, duracao_segs;
    float hora_termino, minuto_termino, segundo_termino;  
    
    printf("Escreva o horario inicial:  \n");
    scanf("%f %f %f", &hora_inicio, &minuto_inicio, &segundo_inicio);
    printf("Horario inicial: %fh: %fm: %fs \n", hora_inicio, minuto_inicio, segundo_inicio);
        
    //Convertendo o horário inicial para segundos.
    float horario_inicial_seg = ((hora_inicio * 3600) + (minuto_inicio * 60)) + segundo_inicio;
    printf("Horario inicial em segundos: %f segundos \n", horario_inicial_seg);
    
    //Convertendo a duração em 00h:00m:00s para segundos.
    printf("Converta duracao em segundos: ");
    scanf("%f %f %f", &duracao_horas, &duracao_minutos, &duracao_segs);   
    float duracao_hrs = duracao_horas * 3600;
    float duracao_min = duracao_minutos * 60;
    float duracao_seg = duracao_segs;
    printf("Duracao da experiencia (segundos) em horas: %f \nDuracao da experiencia (segundos) em minutos: %f \nDuracao da experiencia em segundos: %f \n", duracao_hrs, duracao_min, duracao_seg);


    //Somando horário inicial e duração da experiência em segundos.
    float soma_segundos = horario_inicial_seg + duracao_hrs + duracao_min + duracao_segs;
    printf("Duracao inicio ate o fim em segundos: %f \n", soma_segundos);

    //Imprimindo hora do término do horário.
    float termino_horas = (soma_segundos - duracao_min - duracao_segs) / 3600;
    float termino_min = duracao_min / 60;
    float termino_segs = duracao_segs;
    printf("Horario do termino: %fh: %fm: %fs:", termino_horas, termino_min, termino_segs);



    return 0;
}