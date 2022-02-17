//
// Created by carca on 16/02/2022.
//
#include <stdio.h>


int main ()
{
    int hora;
    int minutos;
    int opcion;


    do {

        printf("Dame solo hora considerando el reloj de 24 horas(0 al 23) : ");
        scanf("%d,", &hora);
        printf("Dame los minutos (0 al 59) : ");
        scanf("%d,", &minutos);

        if (hora >= 0 && hora<= 11 && minutos<=59)
            printf("Buenos dias:");

        else if (hora >= 12 && hora <= 17 && minutos<=59)
            printf("Buenas tardes");

        else if  (hora >= 18 && hora <= 23 && minutos<=59)
            printf("Buenas noches");


        printf("\n Quieres volver a intentarlo? (1.- SI,  2.- NO)  ");
        scanf("%d,", &opcion);

    } while (opcion == 1);

    printf("Gracias");
    return 0;


}
