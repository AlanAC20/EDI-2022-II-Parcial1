//
// Created by carca on 01/03/2022.
//

#include <stdio.h>
#define N 10

void calculaMayorMenor(int numero, int *mayor, int *menor);

int main()
{
    int numero;
    int mayor;
    int menor;


    calculaMayorMenor(numero, &mayor, &menor);

    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d", menor);

    return 0;
}


void calculaMayorMenor(int numero, int *mayor, int *menor)
{
    for(int i = 0; i <= N-1; i++)
    {

        printf("Dame el numero %d", i+1);
        scanf("%d", &numero);

        if(i == 0)
        *mayor = numero;

        if(i == 0)
        *menor = numero;

        if(numero > *mayor)
        *mayor = numero;

        if(numero < *menor)
        *menor = numero;

    }
}


