//Escribe un programa que pida al usuario la cantidad de segundos
// e imprima el número de días, horas, minutos y segundos que son:

// Created by carca on 09/02/2022.
//

#include <stdio.h>
#define DIAS 86400
#define HORAS 3600
#define MINUTOS 60

int main ()
{
    int totalSegundos ;
    int dias;
    int horas;
    int minutos;
    int segundos;

    printf("Cuantos segundos?");
    scanf("%d,", &totalSegundos);

    dias = totalSegundos  / DIAS;
    totalSegundos = totalSegundos  % DIAS;

    horas = totalSegundos  / HORAS;
    totalSegundos = totalSegundos  % HORAS;

    minutos = totalSegundos / MINUTOS;
    totalSegundos = totalSegundos % MINUTOS;

    segundos = totalSegundos;

    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos  %d\n", segundos);


    return 0;


}

