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
    float total=0;
    int mayorPrecio = 0, claveMayor = 0, claveStock = 0, menorStock = 0;
    int i;


    for(i = 0; i < PRODUCTO; i++){
        printf("Cual es la clave del producto %d de %d:\n", i+1 ,PRODUCTO);
        scanf("%d", &clave[i]);
    }

    for(i = 0; i < PRODUCTO; i++){
        printf("Cual es el precio del producto %d\n", clave[i]);
        scanf("%f", &precio[i]);

        if(precio[i] > mayorPrecio){
            mayorPrecio = precio[i];
            claveMayor = clave[i];
        }
    }

    for(i = 0; i < PRODUCTO; i++){
        printf("Cual es el stock del producto %d\n", clave[i]);
        scanf("%d", &stock[i]);

        if(stock[i] < menorStock){
            menorStock = stock[i];
            claveStock = clave[i];
        }
    }


    printf("El producto con mayor precio es: %d\n", claveMayor);
    printf("El producto con menor stock es: %d\n", claveStock);


    for(i = 0; i < PRODUCTO; i++){
        total = total + (precio[i] * stock[i]);
    }
    printf("El total de todo el stock es: %2.f\n", total);

    return 0;
}