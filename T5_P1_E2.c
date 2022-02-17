
// Created by carca on 16/02/2022.
//
#include <stdio.h>

#define KILO 54 //segun Walmart

int main ()
{
    float kilogramos;
    float total;
    int opcion;


    do {
        printf("Cuantos kilogramos de manzana compraste? : ");
        scanf("%f,", &kilogramos);


        if (kilogramos >= 0 && kilogramos <= 2) {
            printf("Lo siento, no aplicas al descuento");
            total = KILO * kilogramos;
            printf("%f,", total);
            }


         else if (kilogramos >= 2.01 && kilogramos <= 5) {
            printf("Felicidades, aplicas a un descuento del 10");
            total = (KILO *kilogramos) - (((KILO * kilogramos) * 10)/100);
            printf("\n El total es: %f", total);
            }


        else if (kilogramos >= 5.01 && kilogramos <= 10) {
            printf("Felicidades, aplicas a un descuento del 15");
            total = (KILO *kilogramos) - (((KILO * kilogramos) * 15)/100);
            printf("\n El total es: %f", total);
        }

        else if (kilogramos >= 10) {
            printf("Felicidades, aplicas a un descuento del 20");
            total = (KILO *kilogramos) - (((KILO * kilogramos) * 20)/100);
            printf("\n El total es: %f", total);
        }


        printf("\n Quieres volver a intentarlo? (1.- SI,  2.- NO)  ");
        scanf("%d,", &opcion);

    } while (opcion == 1);

        printf("Gracias");

    return 0;
}

