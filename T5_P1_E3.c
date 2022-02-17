//
// Created by carca on 16/02/2022.
//
#include <stdio.h>


int main ()
{
    float a;
    float b;
    float c;
    int opcion;


    do {

        printf("Dame el valor del lado a: ");
        scanf("%d,", &a);

        printf("Dame el valor del lado b: ");
        scanf("%d,", &b);

        printf("Dame el valor del lado c: ");
        scanf("%d,", &c);

        if ( a == b && b == c )
            printf("Tu triangulo es EQUILATERO!!");

        else if (a == b && b != c)
            printf("Tu triangulo es ISOSCELES!!");

        else if  (a != b && b != c && c != a)
            printf("Tu triangulo es ESCALENO!!");


        printf("\n Quieres volver a intentarlo? (1.- SI,  2.- NO)  ");
        scanf("%d,", &opcion);

    } while (opcion == 1);

    printf("Gracias");
    return 0;


}