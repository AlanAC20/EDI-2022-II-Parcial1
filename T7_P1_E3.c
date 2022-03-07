//
// Created by carca on 06/03/2022.
//

#include <stdio.h>
#define PRODUCTO 4


int main ()
{

    int clave[PRODUCTO];
    float precio[PRODUCTO];
    int stock[PRODUCTO];
    int mayor = 0;
    float total=0;
    int menorStock = 0;
    int i;

    for(i = 0; i < PRODUCTO; i++){
        printf("Cual es la clave del producto %d de %d:\n", i+1 ,PRODUCTO);
        scanf("%d", &clave[i]);
    }

    for(i = 0; i < PRODUCTO; i++){
        printf("Cual es el precio del producto %d\n", clave[i]);
        scanf("%f", &precio[i]);
    }

    for(i = 0; i < PRODUCTO; i++){
        printf("Cual es el stock del producto %d\n", clave[i]);
        scanf("%d", &stock[i]);

    }

    for(i = 0; i < PRODUCTO; i++){
        if(i == 0)
            mayor = precio[i];

        if(precio[i] > mayor)
            mayor = precio[i];
    }
    for(i = 0; i < PRODUCTO; i++)
    printf("El producto con mayor precio es:  %d\n", mayor);


    for(i = 0; i < PRODUCTO; i++){
        if(i == 0)
            menorStock = stock[i];

        if(stock[i] < menorStock)
            menorStock = stock[i];
    }

    printf("El producto con menor stock es: %d\n", menorStock);








    for(i = 0; i < PRODUCTO; i++){
        total = total + (precio[i] * stock[i]);

    }

    printf("El total de todo el stock es: %f\n", total);






}