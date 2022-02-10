//Escriba un programa que pida el precio de un producto (puede tener decimales) y el porcentaje de descuento.
// Calcule el precio del producto con el descuento y lo imprima con 2 decimales.
// Por ejemplo:  Si el usuario captura el precio de 99.99 y el 25 por ciento de descuento,
// el programa debe de decir que el precio con descuento es:  74.99.

// Created by carca on 09/02/2022.
//
#include <stdio.h>

int main ()
{
    int precio;
    int descuento;
    float total;

    printf("¿Cual es el precio del producto que quieres comprar?");
    scanf("%d,", &precio);
    printf("¿Cual es el porcentaje de descuento del producto?");

    scanf("%d", &descuento);

    total = precio - (precio / 100 * descuento);

    printf("El total a pagar por tu producto es de: %.2f", total);

    return 0;


};