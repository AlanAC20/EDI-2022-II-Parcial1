//
// Created by carca on 03/03/2022.
//

#include <stdio.h>

#define MAX 5

int main()
{
    int arreglo[MAX];
    int i;
    int numero;
    int suma;

    for(int i=0; i <= MAX -1 ; i++){
    printf("Dame numeros del 1 al 100:");
    scanf("%d", &arreglo[MAX]);
    }

    for(int i=0; i <= MAX -1 ; i++) {
        if(arreglo[MAX] % 2 == 0)
            suma = arreglo[MAX] + arreglo[MAX];
    }

    printf("La suma del arreglo es: %d", suma);
}
